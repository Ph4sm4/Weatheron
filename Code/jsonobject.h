#ifndef JSONOBJECT_H
#define JSONOBJECT_H

#include <QString>
#include <QVector>

class JsonObject
{
public:
    JsonObject();
    QString datetime; // QString 2021-12-05QString ,
    int datetimeEpoch; // 1638658800,
    double tempmax; // 0.1,
    double tempmin; // -0.5,
    double temp; // -0.3,
    double feelslikemax; // -1.9,
    double feelslikemin; // -4,
    double feelslike; // -2.7,
    double dew; // -0.7,
    double humidity; // 97.2,
    double precip; // 2.7,
    double precipprob; // 85.6,
    double precipcover; // null,
    QVector<QString> preciptype; // [...],
    double snow; // 1.9,
    double snowdepth; // 1.2,
    double windgust; // 23.8,
    double windspeed; // 10.1,
    double winddir; // 84.5,
    double pressure; // 1007.3,
    double cloudcover; // 99.7,
    double visibility; // 2.5,
    double solarradiation; // 14.6,
    double solarenergy; // 0.6,
    double uvindex; // 1,
    double severerisk; // 10,
    QString sunrise; // 07:28:21 ,
    int sunriseEpoch; // 1638685701,
    QString sunset; // 15:24:42 ,
    int sunsetEpoch; // 1638714282,
    double moonphase; // 0.01,
    QString conditions; // Snow, Overcast ,
    QString description; // QString Cloudy skies throughout the day with a chance of rain or snow.QString ,
    QString icon; // QString snowQString ,
    QVector<QString> stations; // null,
    QString source; // QString fcstQString

};

#endif // JSONOBJECT_H
