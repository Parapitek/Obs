#include <QApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"
#include "statisticsdisplay.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData();

    StatisticsDisplay *stat = new StatisticsDisplay(weatherData);

    weatherData->setMeasurementsChanged(80, 65, 30.4);
    weatherData->setMeasurementsChanged(85, 61, 28.2);
    weatherData->setMeasurementsChanged(86, 59, 27.1);

    return a.exec();
}
