#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gif->setAttribute(Qt::WA_TranslucentBackground);
    ui->gif->setScaledContents(true);
    ui->gif->lower();
    ui->gif->setWindowFlags(Qt::FramelessWindowHint);
    ui->gif->setFixedSize(this->size());

    ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/panorama.gif"))->mask());
    QMovie *movie = new QMovie(appDirPath+"/weather-animations/panorama.gif");
    ui->gif->setMovie(movie);
    movie->start();

    ui->stackedWidget->setVisible(false);
    ui->Next->setVisible(false);
    ui->Back->setVisible(false);
    ui->description->setVisible(false);
    ui->resolvedAddress->setVisible(false);
    ui->timeZone->setVisible(false);
    ui->downloading->setVisible(false);
    ui->address->setVisible(false);
    ui->region_on->setVisible(false);
    ui->lctime->setVisible(false);
    ui->localtime->setVisible(false);

    ui->stackedWidget->setStyleSheet("color: black;");

    ui->description->setWordWrap(true);

    ui->input->setPlaceholderText("Enter location");

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(); //thats basically responsible for the timer in the top right corner, timeout every second

    ui->day->addItem("Forecast dates");
    ui->day->setItemData(0, Qt::AlignCenter, Qt::TextAlignmentRole);
    ui->day->addItem("Today");
    for(int i = 1; i < 15; i++) ui->day->addItem(QDate::currentDate().addDays(i).toString());

    ui->clearInput->setIcon(QIcon(appDirPath + "/weather-animations/x_icon.jpg"));
    ui->clearInput->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    ui->clearInput->setFixedSize(ui->clearInput->iconSize());

    //this will check if the mouse is on hover
    ButtonHoverWatcher *watcher = new ButtonHoverWatcher(this);
    ui->clearInput->installEventFilter(watcher);

    this->setFixedSize(QSize(800,589));
    this->setWindowTitle("Weatheron");

    ui->input->setStyleSheet("border: 1 px solid black; border-style: outset; border-radius: 10px;");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Next_clicked()
{
    currPage++;
    if(currPage == ui->stackedWidget->count()) currPage = 0;
    ui->stackedWidget->setCurrentIndex(currPage);
    //we wanna have some sort of a loop so that if we went to the last page, by clicking NEXT, we can go back
    //to the first page
}

void MainWindow::on_Back_clicked()
{
    currPage--;
    if(currPage < 0) currPage = ui->stackedWidget->count()-1;
    ui->stackedWidget->setCurrentIndex(currPage);
    //we wanna have some sort of a loop so that if we went to the first page, by clicking BACK, we can go right
    //to the last page
}

void MainWindow::on_display_clicked()
{
    if(!CheckinputEmptyMessageBoxError()) return;
    if(ui->day->currentIndex() == 0 && !currConditionsClickedFirstTime){
        QMessageBox msg;
        msg.setText("Wrong day selected");
        msg.setInformativeText("You must select a valid day to show forecast from");
        msg.setIcon(QMessageBox::Information);
        msg.exec();
        return;
    }
    days.clear();
    currPage = 1;
    ui->downloading->setVisible(true);
    QString location = ui->input->text();
    lastInput = location;
    qDebug()<<"location: "<<location;
    networkManager = new QNetworkAccessManager(this);
    connect(networkManager, &QNetworkAccessManager::finished, this, &MainWindow::onResult);
    currConditions = new CurrentConditions();
    networkManager->get(QNetworkRequest(QUrl("https://weather.visualcrossing.com/VisualCrossingWebServices/rest/services/timeline/"+location+"?unitGroup=metric&key=785WM7JMKMWJBDC2LS55JWVCQ&include=fcst%2Ccurrent")));


}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString time_String = time.toString("hh : mm : ss");
    ui->currenTime->setText(time_String);
}

void MainWindow::showTime2()
{
    QDateTime date = QDateTime::currentDateTimeUtc().addSecs(timeOffSet*3600);
    QTime time = date.time();
    QString time_String = time.toString("hh : mm : ss");
    ui->localtime->setText(time_String);
}

void MainWindow::onResult(QNetworkReply *reply)
{
    ui->downloading->setVisible(false);
    if(!reply->error()){
        // So create an object Json Document, by reading into it all the data from the response
        QJsonDocument document = QJsonDocument::fromJson(reply->readAll());

        // Taking from the document root object
        QJsonObject root = document.object();

        QString resAddress = root.value("resolvedAddress").toString();
        QString timeZone = root.value("timezone").toString();
        timeOffSet = root.value("tzoffset").toInt();

        localTime = new QTimer(this);
        connect(localTime, SIGNAL(timeout()), this, SLOT(showTime2()));
        localTime->start();

        QString timeOffSetDisplay;

        if(timeOffSet == 1 || timeOffSet == -1) timeOffSetDisplay = " hour";
        else timeOffSetDisplay = " hours";

        ui->resolvedAddress->setText(resAddress);
        ui->timeZone->setText(timeZone);
        QString sign = (timeOffSet < 0? "-" : "+");
        ui->timeoffset->setText("UTC " + sign + QString::number(qFabs(timeOffSet)) + timeOffSetDisplay);
        qDebug()<<"time zone: "<<timeZone;

        QJsonValue daysVal = root.value("days");
        if(daysVal.isArray()){
            JsonObject day;
            QJsonArray daysArray = daysVal.toArray();
            for(int i = 0; i < daysArray.size(); i++){
                QJsonObject arrVal = daysArray.at(i).toObject();
                day.datetime = arrVal.value("datetime").toString();
                day.datetimeEpoch = arrVal.value("datetimeEpoch").toDouble();
                day.tempmax = arrVal.value("tempmax").toDouble();
                day.tempmin = arrVal.value("tempmin").toDouble();
                day.temp = arrVal.value("temp").toDouble();
                day.feelslikemax = arrVal.value("feelslikemax").toDouble();
                day.feelslikemin = arrVal.value("feelslikemin").toDouble();
                day.feelslike = arrVal.value("feelslike").toDouble();
                day.dew = arrVal.value("dew").toDouble();
                day.humidity = arrVal.value("humidity").toDouble();
                day.precip = arrVal.value("precip").toDouble();
                day.precipprob = arrVal.value("precipprob").toDouble();
                day.precipcover = arrVal.value("precipcover").toDouble();
                day.snow = arrVal.value("snow").toDouble();
                day.snowdepth = arrVal.value("snowdepth").toDouble();
                day.windgust = arrVal.value("windgust").toDouble();
                day.windspeed = arrVal.value("windspeed").toDouble();
                day.winddir = arrVal.value("winddir").toDouble();
                day.pressure = arrVal.value("pressure").toDouble();
                day.cloudcover = arrVal.value("cloudcover").toDouble();
                day.visibility = arrVal.value("visibility").toDouble();
                day.solarradiation = arrVal.value("solarradiation").toDouble();
                day.solarenergy = arrVal.value("solarenergy").toDouble();
                day.uvindex = arrVal.value("uvindex").toDouble();
                day.severerisk = arrVal.value("severerisk").toDouble();
                day.sunrise = arrVal.value("sunrise").toString();
                day.sunriseEpoch = arrVal.value("sunriseEpoch").toInt();
                day.sunset = arrVal.value("sunset").toString();
                day.sunsetEpoch = arrVal.value("sunsetEpoch").toInt();
                day.moonphase = arrVal.value("moonphase").toDouble();
                day.conditions = arrVal.value("conditions").toString();
                day.description = arrVal.value("description").toString();
                day.icon = arrVal.value("icon").toString();
                day.source = arrVal.value("source").toString();
                days.append(day);
            }
        }

        QJsonValue currentVal = root.value("currentConditions");

        QJsonObject currentObj = currentVal.toObject();
        qDebug()<<currentObj.value("pressure").toDouble();
        currConditions->datetime = currentObj.value("datetime").toString();
        currConditions->datetimeEpoch = currentObj.value("datetimeEpoch").toDouble();
        currConditions->temp = currentObj.value("temp").toDouble();
        currConditions->feelslike = currentObj.value("feelslike").toDouble();
        currConditions->dew = currentObj.value("dew").toDouble();
        currConditions->humidity = currentObj.value("humidity").toDouble();
        currConditions->precip = currentObj.value("precip").toDouble();
        currConditions->precipprob = currentObj.value("precipprob").toDouble();
        currConditions->snow = currentObj.value("snow").toDouble();
        currConditions->snowdepth = currentObj.value("snowdepth").toDouble();
        currConditions->windspeed = currentObj.value("windspeed").toDouble();
        currConditions->winddir = currentObj.value("winddir").toDouble();
        currConditions->pressure = currentObj.value("pressure").toDouble();
        currConditions->cloudcover = currentObj.value("cloudcover").toDouble();
        currConditions->visibility = currentObj.value("visibility").toDouble();
        currConditions->solarradiation = currentObj.value("solarradiation").toDouble();
        currConditions->solarenergy = currentObj.value("solarenergy").toDouble();
        currConditions->uvindex = currentObj.value("uvindex").toDouble();
        currConditions->sunrise = currentObj.value("sunrise").toString();
        currConditions->sunriseEpoch = currentObj.value("sunriseEpoch").toInt();
        currConditions->sunset = currentObj.value("sunset").toString();
        currConditions->sunsetEpoch = currentObj.value("sunsetEpoch").toInt();
        currConditions->moonphase = currentObj.value("moonphase").toDouble();
        currConditions->conditions = currentObj.value("conditions").toString();
        currConditions->icon = currentObj.value("icon").toString();


        display(ui->day->currentIndex()+1);
        ui->stackedWidget->setVisible(true);
        ui->Next->setVisible(true);
        ui->Back->setVisible(true);
        ui->description->setVisible(true);
        ui->stackedWidget->setCurrentIndex(1);
        ui->timeZone->setVisible(true);
        ui->resolvedAddress->setVisible(true);
        ui->address->setVisible(true);
        ui->region_on->setVisible(true);
        ui->localtime->setVisible(true);
        ui->lctime->setVisible(true);

    }else{
        DownloadDataErrorMessage();
        qDebug()<<reply;
        return;
    }
}

void MainWindow::onResultPublicIp(QNetworkReply *reply)
{
    if(!reply->error()){
        IP = reply->readAll();
        qDebug()<<IP;
    }else{
        DownloadDataErrorMessage();
        qDebug()<<reply;
        return;
    }
}

void MainWindow::onResultMyLocation(QNetworkReply *reply)
{
    if(!reply->error()){
        QJsonDocument document = QJsonDocument::fromJson(reply->readAll());
        QJsonObject root = document.object();

        QJsonObject locat = root.value("location").toObject();
        QString yourCityName = locat.value("city").toString();
        ui->input->setText(yourCityName);

    }else{
        DownloadDataErrorMessage();
        qDebug()<<reply;
        return;
    }
}
void MainWindow::display(const int _index)
{
    changeFontColor("black");
    if(_index == 0){
        displayCurrentConditions(_index);
    }else{
        displayForecast(_index);
    }
}

void MainWindow::changeFontColor(QString color)
{
    ui->stackedWidget->setStyleSheet("color: "+color+";");
    ui->description->setStyleSheet("color: "+color+";");
    ui->address->setStyleSheet("color: "+color+";");
    ui->resolvedAddress->setStyleSheet("color: "+color+";");
    ui->region_on->setStyleSheet("color: "+color+";");
    ui->timeZone->setStyleSheet("color: "+color+";");
    ui->lctime->setStyleSheet("color: "+color+";");
    ui->localtime->setStyleSheet("color: "+color+";");
    ui->AppName->setStyleSheet("color: "+color+";");
    ui->currenTime->setStyleSheet("color: "+color+";");
}

QString MainWindow::cardinalDir(const double angle)
{
    if(angle > 348.75 || angle <= 11.25) return "N";
    else if(angle > 11.25 && angle <= 33.75) return "NNE";
    else if(angle > 33.75 && angle <= 56.25) return "NE";
    else if(angle > 56.25 && angle <= 78.75) return "ENE";
    else if(angle > 78.75 && angle <= 101.25) return "E";
    else if(angle > 101.25 && angle <= 123.75) return "ESE";
    else if(angle > 123.75 && angle <= 146.25) return "SE";
    else if(angle > 146.25 && angle <= 168.75) return "SSE";
    else if(angle > 168.75 && angle <= 191.25) return "S";
    else if(angle > 191.25 && angle <= 213.75) return "SSW";
    else if(angle > 213.75 && angle <= 236.25) return "SW";
    else if(angle > 236.25 && angle <= 258.75) return "WSW";
    else if(angle > 258.75 && angle <= 281.25) return "W";
    else if(angle > 281.25 && angle <= 303.75) return "WNW";
    else if(angle > 303.75 && angle <= 326.25) return "NW";
    else if(angle > 326.25 && angle <= 348.75) return "NNW";

    return "Error";
}

void MainWindow::on_day_currentIndexChanged(int index)
{
    qDebug()<<index;
    if(index != 0) displayForecast(index-1);
}

void MainWindow::displayForecast(int _index)
{
    if(_index < days.size()){
        ui->precip_prob->setText(QString::number((days.at(_index).precip == NULL? 0 : days.at(_index).precipprob)) + " %");
        ui->pressure->setText(QString::number(days.at(_index).pressure) + " hPa");
        ui->snow->setText(QString::number((days.at(_index).snow == NULL? 0 : days.at(_index).snow)) + " mm");
        ui->snow_depth->setText(QString::number(days.at(_index).snowdepth) + " mm");
        ui->rain->setText(QString::number((days.at(_index).precip == NULL? 0 : days.at(_index).precip)) + " mm");
        ui->sunset->setText(days.at(_index).sunset);
        ui->sunrise->setText(days.at(_index).sunrise);
        ui->maxtemp->setText(QString::number(days.at(_index).tempmax) + cels);
        ui->mintemp->setText(QString::number(days.at(_index).tempmin) + cels);
        ui->feelslike->setText(QString::number(days.at(_index).feelslike) + cels);
        ui->humidity->setText(QString::number(days.at(_index).humidity) + " %");
        ui->devpointtemp->setText(QString::number(days.at(_index).dew) + cels);
        ui->windspeed->setText(QString::number(days.at(_index).windspeed) + " km/h");
        ui->winddir->setText(cardinalDir(days.at(_index).winddir));
        ui->visibility->setText(QString::number(days.at(_index).visibility) + " km");
        ui->cloudcover->setText(QString::number(days.at(_index).cloudcover) + " %");
        ui->description->setText(days.at(_index).conditions);
        ui->date->setText(days.at(_index).datetime);
        ui->moonphase->setText(QString::number(days.at(_index).moonphase*100) + " %");
        ui->temperature->setText(QString::number(days.at(_index).temp) + cels);

        if(days.at(_index).icon == "snow" || days.at(_index).icon == "snow-showers-day" ||
                days.at(_index).icon == "snow-showers-night"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/snow.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/snow.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(days.at(_index).icon == "thunder-rain" || days.at(_index).icon == "thunder-showers-day" ||
                days.at(_index).icon == "thunder-showers-night"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/thunderstorm.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/thunderstorm.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(days.at(_index).icon == "rain" || days.at(_index).icon == "showers-day" ||
                days.at(_index).icon == "showers-night"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/rain.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/rain.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(days.at(_index).icon == "fog"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/fog.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/fog.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(days.at(_index).icon == "cloudy" || days.at(_index).icon == "partly-cloudy-night" ||
                days.at(_index).icon == "partly-cloudy-day"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/clouds.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/clouds.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(days.at(_index).icon == "clear-day" || days.at(_index).icon == "clear-night" ||
                days.at(_index).icon == "wind"){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/clear.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/clear.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("black");
        }
    }
}

void MainWindow::DownloadDataErrorMessage()
{
    QMessageBox msg;
    msg.setText("Unable to download data");
    msg.setInformativeText("Check your internet connection or enter valid location");
    msg.setIcon(QMessageBox::Critical);
    msg.exec();
}

bool MainWindow::CheckinputEmptyMessageBoxError()
{
    if(ui->input->text() == ""){
        QMessageBox msg;
        msg.setText("Input empty");
        msg.setInformativeText("You have to enter a valid location (city/country)");
        msg.setIcon(QMessageBox::Information);
        msg.exec();
        return false;
    }
    return true;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->type() == QEvent::KeyPress){
       if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return){
           on_display_clicked();
           qDebug()<<"enter pressed";
       }
    }
}


void MainWindow::on_clearInput_clicked()
{
    ui->input->setText("");
}


void MainWindow::on_clearInput_pressed()
{
    ui->clearInput->setIcon(QIcon(appDirPath + "/weather-animations/x_whiteblackicon.png"));
    ui->clearInput->setStyleSheet("background-color: white; border: none;");
}


void MainWindow::on_clearInput_released()
{
    ui->clearInput->setIcon(QIcon(appDirPath + "/weather-animations/x_grayicon.jpg"));
    ui->clearInput->setStyleSheet("background-color: white; border: none;");
}


void MainWindow::on_myLocation_clicked()
{
    togetPublic = new QNetworkAccessManager(this);
    connect(togetPublic, &QNetworkAccessManager::finished, this, &MainWindow::onResultPublicIp);
    togetPublic->get(QNetworkRequest(QUrl("https://api.ipify.org")));

    myLocation = new QNetworkAccessManager(this);
    connect(myLocation, &QNetworkAccessManager::finished, this, &MainWindow::onResultMyLocation);
    myLocation->get(QNetworkRequest(QUrl("https://geo.ipify.org/api/v2/country,city?apiKey=at_9eWVUV1lsSBlu5D9D9g83RT4deNWh&ipAddress="+ IP)));
}

void MainWindow::displayCurrentConditions(int _index)
{
    if(_index < days.size()){
        ui->precip_prob->setText(QString::number((currConditions->precipprob == NULL? days.at(_index).precipprob : currConditions->precipprob)) + " %");
        ui->pressure->setText(QString::number(currConditions->pressure) + " hPa");
        ui->snow->setText(QString::number((currConditions->snow == NULL? days.at(_index).snow : currConditions->snow)) + " mm");
        ui->snow_depth->setText(QString::number((currConditions->snowdepth == NULL? days.at(_index).precip : currConditions->snowdepth)) + " mm");
        ui->rain->setText(QString::number((currConditions->precip == NULL? 0 : currConditions->precip)) + " mm");
        ui->sunset->setText(currConditions->sunset);
        ui->sunrise->setText(currConditions->sunrise);
        ui->maxtemp->setText(QString::number(days.at(_index).tempmax) + cels);
        ui->mintemp->setText(QString::number(days.at(_index).tempmin) + cels);
        ui->feelslike->setText(QString::number(currConditions->feelslike) + cels);
        ui->humidity->setText(QString::number((currConditions->humidity == NULL? days.at(_index).humidity : currConditions->humidity)) + " %");
        ui->devpointtemp->setText(QString::number(currConditions->dew) + cels);
        ui->windspeed->setText(QString::number((currConditions->windspeed == NULL? days.at(_index).windspeed : currConditions->windspeed)) + " km/h");
        ui->winddir->setText(cardinalDir((currConditions->winddir == NULL? days.at(_index).winddir : currConditions->winddir)));
        ui->visibility->setText(QString::number((currConditions->visibility == NULL? days.at(_index).visibility : currConditions->visibility)) + " km");
        ui->cloudcover->setText(QString::number((currConditions->cloudcover == NULL? days.at(_index).cloudcover : currConditions->cloudcover)) + " %");
        ui->description->setText(days.at(_index).description);
        ui->date->setText(currConditions->datetime);
        ui->moonphase->setText(QString::number(currConditions->moonphase*100) + " %");
        ui->temperature->setText(QString::number(currConditions->temp) + cels);

        if(currConditions->icon == "snow" || currConditions->icon == "snow-showers-day" ||
                currConditions->icon == "snow-showers-night" ||
                (currConditions->icon == "" && ((days.at(_index).icon == "snow") ||
                 days.at(_index).icon == "snow-showers-day" ||
                 days.at(_index).icon == "snow-showers-night"))){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/snow.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/snow.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(currConditions->icon == "thunder-rain" || currConditions->icon == "thunder-showers-day" ||
                currConditions->icon == "thunder-showers-night"||
                (currConditions->icon == "" && ((days.at(_index).icon == "thunder-rain") ||
                 days.at(_index).icon == "thunder-showers-day" ||
                 days.at(_index).icon == "thunder-showers-night"))){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/thunderstorm.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/thunderstorm.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(currConditions->icon == "rain" || currConditions->icon == "showers-day" ||
                currConditions->icon == "showers-night" ||
                (currConditions->icon == "" && ((days.at(_index).icon == "rain") ||
                 days.at(_index).icon == "showers-day" ||
                 days.at(_index).icon == "showers-night"))){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/rain.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/rain.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(currConditions->icon == "fog" || (currConditions->icon == "" && days.at(_index).icon == "fog")){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/fog.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/fog.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(currConditions->icon == "cloudy" || currConditions->icon == "partly-cloudy-night" ||
                currConditions->icon == "partly-cloudy-day" ||
                (currConditions->icon == "" && ((days.at(_index).icon == "cloudy") ||
                 days.at(_index).icon == "partly-cloudy-night" ||
                 days.at(_index).icon == "partly-cloudy-day"))){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/clouds.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/clouds.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("white");
        }
        else if(currConditions->icon == "clear-day" || currConditions->icon == "clear-night" ||
                currConditions->icon == "wind" ||
                (currConditions->icon == "" && ((days.at(_index).icon == "clear-day") ||
                 days.at(_index).icon == "clear-night" ||
                 days.at(_index).icon == "wind"))){
            ui->gif->setMask((new QPixmap(appDirPath+"/weather-animations/clear.gif"))->mask());
            QMovie *movie = new QMovie(appDirPath+"/weather-animations/clear.gif");
            ui->gif->setMovie(movie);
            movie->start();
            changeFontColor("black");
        }
    }

}


void MainWindow::on_currConditions_clicked()
{
    if(days.size() != 0 && ui->input->text() == ""){
        ui->day->setCurrentIndex(0);
        displayCurrentConditions(0);
        return;
    }
    if(days.size() == 0 && !CheckinputEmptyMessageBoxError() && !currConditionsClickedFirstTime) return;
    if(days.size() == 0 || lastInput != ui->input->text()){
        currConditionsClickedFirstTime = true;
        cameFromCurrentConditionsButtonClicked = true;
        on_display_clicked();
    }
    ui->day->setCurrentIndex(0);
    displayCurrentConditions(0);
}

