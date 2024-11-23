#pragma once
#include "IObserver.h"
#include <iostream>

namespace WeatherNamespace {
    class CurrentConditionsDisplay : public Iobserver {
    public:
        void update(const data& d) override {
            std::cout << std::endl;
            std::cout << "#########################################################\n";
            std::cout << "#\t\t# Current Conditions Display #\t\t#\n";
            std::cout << "#\t\t##############################\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tTemperature:\t " << d.m_temperature << "\t\t\t\t#\n";
            std::cout << "#\tPressure:\t " << d.m_pressure << "\t\t\t\t#\n";
            std::cout << "#\tHumidity:\t " << d.m_humidity << "\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#########################################################\n";
            std::cout << std::endl;
        }
    };
}
