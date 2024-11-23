#pragma once
#include "List.h"
#include "IObserver.h"
#include "data.h"

namespace WeatherNamespace {
    class WeatherData {
    private:
        data m_data;
        List<Iobserver*> observer_list;

    public:
       
        WeatherData(int temp, int humi, int pres);
        ~WeatherData() = default;

        void addObserver(Iobserver* observer);
        void removeObserver(Iobserver* observer);
        void setWeatherData(int temp, int pres, int humi);
        void notifyObservers();
    };
}
