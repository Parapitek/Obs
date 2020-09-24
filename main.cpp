#include <QCoreApplication>
#include "weatherdata.h"
#include "currentconditionsdisplay.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData();

    CurrentConditionsDisplay *current = new CurrentConditionsDisplay(weatherData);

    weatherData->setMeasurementsChanged(80, 65, 30.4);

    return a.exec();
}
