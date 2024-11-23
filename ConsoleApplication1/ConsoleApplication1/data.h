#pragma once

namespace WeatherNamespace {
    class data {
    public:
        int m_temperature;
        int m_humidity;
        int m_pressure;
        friend class WeatherData;
        friend class Iobserver;
    };
}