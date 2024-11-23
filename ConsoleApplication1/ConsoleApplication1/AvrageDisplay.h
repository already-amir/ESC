

#pragma once
#include "IObserver.h"
#include <iostream>

namespace WeatherNamespace {
    class AvrageDisplay : public Iobserver {
    public:
        void update(const dataplus& d) override {

            int sumtemp = d.sum.m_temperature;
            int sumper = d.sum.m_pressure;
            int sumhum = d.sum.m_humidity;


            int count = d.counter;

            std::cout << std::endl;
            std::cout << "#########################################################\n";
            std::cout << "#\t\t#AvrageDisplay#\t\t\t\t#\n";
            std::cout << "#\t\t###############\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tAvarage Temperature:\t " << sumtemp/ count << "\t\t\t#\n";
            std::cout << "#\tAvarage Pressure:\t " << sumper/ count << "\t\t\t#\n";
            std::cout << "#\tAvarage Humidity:\t " << sumhum/ count << "\t\t\t#\n";
            
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#########################################################\n";
            std::cout << std::endl;
        }
    };
}