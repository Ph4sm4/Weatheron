/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *display;
    QLabel *description;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLabel *date;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *cloudcover;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *timeoffset;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *devpointtemp;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLabel *feelslike;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *humidity;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *moonphase;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_22;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_10;
    QLabel *precip_prob;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLabel *pressure;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLabel *snow;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_13;
    QLabel *snow_depth;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_14;
    QLabel *rain;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_15;
    QLabel *sunset;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_17;
    QLabel *sunrise;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_21;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_16;
    QLabel *temperature;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_19;
    QLabel *maxtemp;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_21;
    QLabel *mintemp;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_23;
    QLabel *visibility;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_25;
    QLabel *windspeed;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_18;
    QLabel *winddir;
    QLabel *currenTime;
    QComboBox *day;
    QPushButton *Back;
    QPushButton *Next;
    QLabel *downloading;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_24;
    QLabel *AppName;
    QLineEdit *input;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_23;
    QLabel *address;
    QLabel *resolvedAddress;
    QHBoxLayout *horizontalLayout_25;
    QLabel *region_on;
    QLabel *timeZone;
    QHBoxLayout *horizontalLayout_26;
    QLabel *lctime;
    QLabel *localtime;
    QLabel *gif;
    QPushButton *clearInput;
    QPushButton *myLocation;
    QPushButton *currConditions;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 589);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        display = new QPushButton(centralwidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(570, 40, 111, 31));
        display->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px  solid black;\n"
"}\n"
"QPushButton:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #696969;\n"
"border: 1px solid black;\n"
"}"));
        description = new QLabel(centralwidget);
        description->setObjectName(QString::fromUtf8("description"));
        description->setGeometry(QRect(40, 120, 331, 71));
        QFont font;
        font.setPointSize(12);
        description->setFont(font);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(30, 190, 318, 269));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 401, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_3->addWidget(label_3);

        date = new QLabel(layoutWidget);
        date->setObjectName(QString::fromUtf8("date"));
        date->setFont(font);

        horizontalLayout_3->addWidget(date);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        cloudcover = new QLabel(layoutWidget);
        cloudcover->setObjectName(QString::fromUtf8("cloudcover"));
        cloudcover->setFont(font);

        horizontalLayout_2->addWidget(cloudcover);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        timeoffset = new QLabel(layoutWidget);
        timeoffset->setObjectName(QString::fromUtf8("timeoffset"));
        timeoffset->setFont(font);

        horizontalLayout_4->addWidget(timeoffset);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_5->addWidget(label_6);

        devpointtemp = new QLabel(layoutWidget);
        devpointtemp->setObjectName(QString::fromUtf8("devpointtemp"));
        devpointtemp->setFont(font);

        horizontalLayout_5->addWidget(devpointtemp);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout->addWidget(label_5);

        feelslike = new QLabel(layoutWidget);
        feelslike->setObjectName(QString::fromUtf8("feelslike"));
        feelslike->setFont(font);

        horizontalLayout->addWidget(feelslike);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        horizontalLayout_6->addWidget(label_7);

        humidity = new QLabel(layoutWidget);
        humidity->setObjectName(QString::fromUtf8("humidity"));
        humidity->setFont(font);

        horizontalLayout_6->addWidget(humidity);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_7->addWidget(label_8);

        moonphase = new QLabel(layoutWidget);
        moonphase->setObjectName(QString::fromUtf8("moonphase"));
        moonphase->setFont(font);

        horizontalLayout_7->addWidget(moonphase);


        verticalLayout->addLayout(horizontalLayout_7);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_22 = new QHBoxLayout(page_2);
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_10 = new QLabel(page_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        horizontalLayout_8->addWidget(label_10);

        precip_prob = new QLabel(page_2);
        precip_prob->setObjectName(QString::fromUtf8("precip_prob"));
        precip_prob->setFont(font);

        horizontalLayout_8->addWidget(precip_prob);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_9->addWidget(label_11);

        pressure = new QLabel(page_2);
        pressure->setObjectName(QString::fromUtf8("pressure"));
        pressure->setFont(font);

        horizontalLayout_9->addWidget(pressure);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout_10->addWidget(label_12);

        snow = new QLabel(page_2);
        snow->setObjectName(QString::fromUtf8("snow"));
        snow->setFont(font);

        horizontalLayout_10->addWidget(snow);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_13 = new QLabel(page_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);

        horizontalLayout_12->addWidget(label_13);

        snow_depth = new QLabel(page_2);
        snow_depth->setObjectName(QString::fromUtf8("snow_depth"));
        snow_depth->setFont(font);

        horizontalLayout_12->addWidget(snow_depth);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_14 = new QLabel(page_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);

        horizontalLayout_11->addWidget(label_14);

        rain = new QLabel(page_2);
        rain->setObjectName(QString::fromUtf8("rain"));
        rain->setFont(font);

        horizontalLayout_11->addWidget(rain);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_15 = new QLabel(page_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);

        horizontalLayout_13->addWidget(label_15);

        sunset = new QLabel(page_2);
        sunset->setObjectName(QString::fromUtf8("sunset"));
        sunset->setFont(font);

        horizontalLayout_13->addWidget(sunset);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_17 = new QLabel(page_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setFont(font);

        horizontalLayout_14->addWidget(label_17);

        sunrise = new QLabel(page_2);
        sunrise->setObjectName(QString::fromUtf8("sunrise"));
        sunrise->setFont(font);

        horizontalLayout_14->addWidget(sunrise);


        verticalLayout_2->addLayout(horizontalLayout_14);


        horizontalLayout_22->addLayout(verticalLayout_2);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        horizontalLayout_21 = new QHBoxLayout(page_3);
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_16 = new QLabel(page_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        horizontalLayout_15->addWidget(label_16);

        temperature = new QLabel(page_3);
        temperature->setObjectName(QString::fromUtf8("temperature"));
        temperature->setFont(font);

        horizontalLayout_15->addWidget(temperature);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_19 = new QLabel(page_3);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setFont(font);

        horizontalLayout_16->addWidget(label_19);

        maxtemp = new QLabel(page_3);
        maxtemp->setObjectName(QString::fromUtf8("maxtemp"));
        maxtemp->setFont(font);

        horizontalLayout_16->addWidget(maxtemp);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_21 = new QLabel(page_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setFont(font);

        horizontalLayout_17->addWidget(label_21);

        mintemp = new QLabel(page_3);
        mintemp->setObjectName(QString::fromUtf8("mintemp"));
        mintemp->setFont(font);

        horizontalLayout_17->addWidget(mintemp);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_23 = new QLabel(page_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setFont(font);

        horizontalLayout_18->addWidget(label_23);

        visibility = new QLabel(page_3);
        visibility->setObjectName(QString::fromUtf8("visibility"));
        visibility->setFont(font);

        horizontalLayout_18->addWidget(visibility);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_25 = new QLabel(page_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setFont(font);

        horizontalLayout_19->addWidget(label_25);

        windspeed = new QLabel(page_3);
        windspeed->setObjectName(QString::fromUtf8("windspeed"));
        windspeed->setFont(font);

        horizontalLayout_19->addWidget(windspeed);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_18 = new QLabel(page_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setFont(font);

        horizontalLayout_20->addWidget(label_18);

        winddir = new QLabel(page_3);
        winddir->setObjectName(QString::fromUtf8("winddir"));
        winddir->setFont(font);

        horizontalLayout_20->addWidget(winddir);


        verticalLayout_3->addLayout(horizontalLayout_20);


        horizontalLayout_21->addLayout(verticalLayout_3);

        stackedWidget->addWidget(page_3);
        currenTime = new QLabel(centralwidget);
        currenTime->setObjectName(QString::fromUtf8("currenTime"));
        currenTime->setGeometry(QRect(30, 10, 131, 20));
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        currenTime->setFont(font1);
        day = new QComboBox(centralwidget);
        day->setObjectName(QString::fromUtf8("day"));
        day->setGeometry(QRect(570, 80, 111, 31));
        day->setLayoutDirection(Qt::LeftToRight);
        day->setStyleSheet(QString::fromUtf8("QComboBox{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px  solid black;\n"
"}\n"
"QComboBox:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}"));
        day->setFrame(true);
        day->setModelColumn(0);
        Back = new QPushButton(centralwidget);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(520, 490, 100, 41));
        Back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #696969;\n"
"border: 1px solid black;\n"
"}"));
        Next = new QPushButton(centralwidget);
        Next->setObjectName(QString::fromUtf8("Next"));
        Next->setGeometry(QRect(630, 490, 100, 41));
        Next->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px solid black;\n"
"}\n"
"QPushButton:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #696969;\n"
"border: 1px solid black;\n"
"}"));
        downloading = new QLabel(centralwidget);
        downloading->setObjectName(QString::fromUtf8("downloading"));
        downloading->setGeometry(QRect(50, 90, 181, 20));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        downloading->setFont(font2);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 531, 52));
        horizontalLayout_24 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        AppName = new QLabel(layoutWidget1);
        AppName->setObjectName(QString::fromUtf8("AppName"));
        QFont font3;
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setItalic(true);
        AppName->setFont(font3);

        horizontalLayout_24->addWidget(AppName);

        input = new QLineEdit(layoutWidget1);
        input->setObjectName(QString::fromUtf8("input"));
        QFont font4;
        font4.setPointSize(16);
        input->setFont(font4);

        horizontalLayout_24->addWidget(input);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 200, 361, 195));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        address = new QLabel(layoutWidget2);
        address->setObjectName(QString::fromUtf8("address"));
        address->setFont(font);
        address->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_23->addWidget(address);

        resolvedAddress = new QLabel(layoutWidget2);
        resolvedAddress->setObjectName(QString::fromUtf8("resolvedAddress"));
        resolvedAddress->setFont(font);
        resolvedAddress->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_23->addWidget(resolvedAddress);


        verticalLayout_4->addLayout(horizontalLayout_23);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        region_on = new QLabel(layoutWidget2);
        region_on->setObjectName(QString::fromUtf8("region_on"));
        region_on->setFont(font);
        region_on->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_25->addWidget(region_on);

        timeZone = new QLabel(layoutWidget2);
        timeZone->setObjectName(QString::fromUtf8("timeZone"));
        timeZone->setFont(font);
        timeZone->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_25->addWidget(timeZone);


        verticalLayout_4->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        lctime = new QLabel(layoutWidget2);
        lctime->setObjectName(QString::fromUtf8("lctime"));
        lctime->setFont(font);
        lctime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_26->addWidget(lctime);

        localtime = new QLabel(layoutWidget2);
        localtime->setObjectName(QString::fromUtf8("localtime"));
        localtime->setFont(font);
        localtime->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black	\n"
";\n"
"}"));

        horizontalLayout_26->addWidget(localtime);


        verticalLayout_4->addLayout(horizontalLayout_26);

        gif = new QLabel(centralwidget);
        gif->setObjectName(QString::fromUtf8("gif"));
        gif->setGeometry(QRect(0, 0, 800, 589));
        clearInput = new QPushButton(centralwidget);
        clearInput->setObjectName(QString::fromUtf8("clearInput"));
        clearInput->setGeometry(QRect(540, 48, 33, 27));
        clearInput->setAutoFillBackground(false);
        clearInput->setStyleSheet(QString::fromUtf8(""));
        myLocation = new QPushButton(centralwidget);
        myLocation->setObjectName(QString::fromUtf8("myLocation"));
        myLocation->setGeometry(QRect(685, 40, 111, 31));
        myLocation->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px  solid black;\n"
"}\n"
"QPushButton:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #696969;\n"
"border: 1px solid black;\n"
"}"));
        currConditions = new QPushButton(centralwidget);
        currConditions->setObjectName(QString::fromUtf8("currConditions"));
        currConditions->setGeometry(QRect(685, 80, 111, 31));
        currConditions->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #A9A9A9;\n"
"border: 1px  solid black;\n"
"}\n"
"QPushButton:hover{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"border: 1px solid black;\n"
"color: rgba(255,255,255,1);\n"
"}\n"
"QPushButton:pressed{\n"
"border-style: outset;\n"
"border-radius: 10px;\n"
"background-color: #696969;\n"
"border: 1px solid black;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "Display", nullptr));
        description->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Data from (local time):", nullptr));
        date->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Cloud cover:", nullptr));
        cloudcover->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Time zone offset:", nullptr));
        timeoffset->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Dew point temperature: ", nullptr));
        devpointtemp->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Feels like:", nullptr));
        feelslike->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Humidity:", nullptr));
        humidity->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Moon cycle state:", nullptr));
        moonphase->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Precipation probability:", nullptr));
        precip_prob->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Pressure:", nullptr));
        pressure->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Snow:", nullptr));
        snow->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Snow Depth:", nullptr));
        snow_depth->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Rain:", nullptr));
        rain->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Sunset:", nullptr));
        sunset->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Sunrise:", nullptr));
        sunrise->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Temperature:", nullptr));
        temperature->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Max temperature:", nullptr));
        maxtemp->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Min temperature:", nullptr));
        mintemp->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Visibility:", nullptr));
        visibility->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Wind speed:", nullptr));
        windspeed->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Wind direction", nullptr));
        winddir->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        currenTime->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        day->setCurrentText(QString());
        day->setPlaceholderText(QString());
        Back->setText(QCoreApplication::translate("MainWindow", "<- Back", nullptr));
        Next->setText(QCoreApplication::translate("MainWindow", "Next ->", nullptr));
        downloading->setText(QCoreApplication::translate("MainWindow", "Downloading data...", nullptr));
        AppName->setText(QCoreApplication::translate("MainWindow", "Weatheron", nullptr));
        address->setText(QCoreApplication::translate("MainWindow", "Address:", nullptr));
        resolvedAddress->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        region_on->setText(QCoreApplication::translate("MainWindow", "Region:", nullptr));
        timeZone->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lctime->setText(QCoreApplication::translate("MainWindow", "Local (UTC) time:", nullptr));
        localtime->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        gif->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        clearInput->setText(QString());
        myLocation->setText(QCoreApplication::translate("MainWindow", "My location", nullptr));
        currConditions->setText(QCoreApplication::translate("MainWindow", "Current conditions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
