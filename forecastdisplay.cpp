#include "forecastdisplay.h"

ForecastDisplay::ForecastDisplay(Subject *weatherData) {
    currentPressure = 29.92;

    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void ForecastDisplay::update(float t, float h, float p) {
    lastPressure = currentPressure;
    currentPressure = p;
    this->display();
}

void ForecastDisplay::display() {
    cout << "Forecast: ";
    if (currentPressure > lastPressure) {
        cout << "Погода скоро улучшится!" << endl;
    }
    else if (currentPressure == lastPressure) {
        cout << "Без изменений" << endl;
    }
    else if (currentPressure < lastPressure) {
        cout << "Скоро будет дождь" << endl;
    }
}
