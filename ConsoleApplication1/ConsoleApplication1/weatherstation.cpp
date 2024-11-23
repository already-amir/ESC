#include "WeatherData.h"
#include "CurrentConditionDisplay.h"

using namespace WeatherNamespace;

int main() {
    WeatherData tabriz_station(27, 1000, 70);

    CurrentConditionsDisplay display1;

    tabriz_station.addObserver(&display1);

    tabriz_station.setWeatherData(25, 1012, 60);
    tabriz_station.setWeatherData(30, 1010, 50);

    return 0;
}
