#pragma once
#include "List.h"
#include "IObserver.h"
#include "data.h"
#include "dataplus.h"

namespace WeatherNamespace {
    class WeatherData {
    private:
        
        List<Iobserver*> observer_list;
        
        dataplus datap;

    public:
       
        WeatherData(int temp, int humi, int pres);
        ~WeatherData() = default;

        void addObserver(Iobserver* observer);
        void removeObserver(Iobserver* observer);
        void setWeatherData(int temp, int pres, int humi);
        void notifyObservers();
    };
}
