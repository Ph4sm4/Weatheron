#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTimer>
#include <QDateTime>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QUrlQuery>
#include <QNetworkReply>
#include <QUrl>
#include <QVector>
#include <QMessageBox>
#include <QPixmap>
#include <QMovie>
#include <QtMath>
#include <QCoreApplication>
#include <QNetworkReply>
#include <QKeyEvent>
#include <QBoxLayout>

#include "jsonobject.h"
#include "currentconditions.h"
#include "buttonhoverwatcher.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_Next_clicked();

    void on_Back_clicked();

    void on_display_clicked();

    void showTime();

    void showTime2();

    void onResult(QNetworkReply *reply);

    void onResultPublicIp(QNetworkReply *reply);

    void onResultMyLocation(QNetworkReply *reply);

    void on_day_currentIndexChanged(int index);

    void on_clearInput_clicked();

    void on_clearInput_pressed();

    void on_clearInput_released();

    void on_myLocation_clicked();

    void displayCurrentConditions(int _index);

    void on_currConditions_clicked();

private:
    Ui::MainWindow *ui;

    void changeFontColor(QString color);
    void display(const int _index);
    QString cardinalDir(const double angle);
    void displayForecast(int _index);
    void DownloadDataErrorMessage();
    QNetworkAccessManager *networkManager;
    QNetworkAccessManager *myLocation;
    QNetworkAccessManager *togetPublic;
    qint16 currPage = 0;
    QTimer *timer;
    QTimer *localTime;
    int timeOffSet;
    CurrentConditions *currConditions;
    QVector<JsonObject> days;
    const QString API_KEY = "785WM7JMKMWJBDC2LS55JWVCQ";
    const QString cels = " °C";
    bool CheckinputEmptyMessageBoxError();
    bool currConditionsClickedFirstTime = false;
    QString lastInput;
    bool cameFromCurrentConditionsButtonClicked = false;
    QString IP;
    void keyPressEvent(QKeyEvent* event);
    const QString appDirPath = QCoreApplication::applicationDirPath();
};
#endif // MAINWINDOW_H
