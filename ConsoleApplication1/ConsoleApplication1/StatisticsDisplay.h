
#pragma once
#include "IObserver.h"
#include <iostream>

namespace WeatherNamespace {
    class StatisticsDisplay : public Iobserver {
    public:
        void update(const dataplus& d) override {

            int mintemp = d.min.m_temperature;
            int minpre = d.min.m_pressure;
            int minhum = d.min.m_humidity;


            int maxtemp = d.max.m_temperature;
            int maxpre = d.max.m_pressure;
            int maxhum = d.max.m_humidity;



            std::cout << std::endl;
            std::cout << "#########################################################\n";
            std::cout << "#\t\t#StatisticsDisplay#\t\t\t#\n";
            std::cout << "#\t\t###################\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tMAX Temperature:\t " << maxtemp << "\t\t\t#\n";
            std::cout << "#\tMIN Temperature:\t " << mintemp << "\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tMAX Pressure:\t " << maxpre << "\t\t\t\t#\n";
            std::cout << "#\tMIN Pressure:\t " << minpre << "\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\tMAX Humidity:\t " << maxhum << "\t\t\t\t#\n";
            std::cout << "#\tMIN Humidity:\t " << minhum << "\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#\t\t\t\t\t\t\t#\n";
            std::cout << "#########################################################\n";
            std::cout << std::endl;
        }
    };
}