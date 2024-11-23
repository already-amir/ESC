#pragma once
#include "IObserver.h"
#include <iostream>

namespace WeatherNamespace {
    class CurrentConditionsDisplay : public Iobserver {
    public:
        void update(const dataplus& d) override {

            int temp = d.curr.m_temperature;
            int pre = d.curr.m_pressure;
            int hum = d.curr.m_humidity;



            std::cout << std::endl;
            std::cout << "#########################################################\n";
            std::cout << "#\t\t# Current Conditions Display #\t\t#\n";
            std::cout << "#\t\t##############################\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tTemperature:\t " << temp << "\t\t\t\t#\n";
            std::cout << "#\tPressure:\t " << pre << "\t\t\t\t#\n";
            std::cout << "#\tHumidity:\t " << hum << "\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#########################################################\n";
            std::cout << std::endl;
        }
    };
}
