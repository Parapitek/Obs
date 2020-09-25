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
        cout << "Improving weather on the way!" << endl;
    }
    else if (currentPressure == lastPressure) {
        cout << "More of the same" << endl;
    }
    else if (currentPressure < lastPressure) {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}
