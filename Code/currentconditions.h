#ifndef CURRENTCONDITIONS_H
#define CURRENTCONDITIONS_H

#include <QVector>

class CurrentConditions
{
public:
    CurrentConditions();
    QString datetime; // QString 18:30:00QString ,
    double datetimeEpoch; // 1638725400,
    double temp; // -0.1,
    double feelslike; // -4.1,
    double humidity; // 100,
    double dew; // -0.1,
    double precip; // null,
    double precipprob; // null,
    double snow; // null,
    double snowdepth; // 0,
    double windspeed; // 13,
    double winddir; // 79,
    double pressure; // 1006,
    double visibility; // 4,
    double cloudcover; // 88,
    double solarradiation; // null,
    double solarenergy; // null,
    double uvindex; // null,
    QString conditions; // QString Partially cloudyQString ,
    QString icon; // QString partly-cloudy-nightQString ,
    QString sunrise; // QString 07:28:21QString ,
    int sunriseEpoch; // 1638685701,
    QString sunset; // QString 15:24:42QString ,
    int sunsetEpoch; // 1638714282,
    double moonphase; // 0.01
};

#endif // CURRENTCONDITIONS_H
