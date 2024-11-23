#include "WeatherData.h"
#include "iostream"

namespace WeatherNamespace {
  
    WeatherData::WeatherData(int temp, int pres,  int humi) {

        datap.min.m_temperature = temp;
        datap.min.m_pressure = pres;
        datap.min.m_humidity = humi;
        setWeatherData(temp, pres, humi);
        datap.counter = 1;

    }

    void WeatherData::addObserver(Iobserver* observer) {
        observer_list.insertBack(observer);
    }

    void WeatherData::removeObserver(Iobserver* observer) {
        size_t size = observer_list.size();
        for (size_t i = 0; i < size; ++i) {
            Iobserver* current = observer_list.removeFront();
            if (current != observer) {
                observer_list.insertBack(current);
            }
        }
    }

    void WeatherData::setWeatherData(int temp, int pres, int humi) {
        
       
        
       
        datap.counter++;

        datap.curr.m_temperature = temp;
        datap.curr.m_pressure = pres;
        datap.curr.m_humidity = humi;

        
        datap.min.m_temperature = std::min(temp, datap.min.m_temperature);
        datap.min.m_pressure = std::min(pres, datap.min.m_pressure);
        datap.min.m_humidity = std::min(humi, datap.min.m_humidity);

        datap.max.m_temperature = std::max(temp, datap.max.m_temperature);
        datap.max.m_pressure = std::max(pres, datap.max.m_pressure);
        datap.max.m_humidity = std::max(humi, datap.max.m_humidity);

       
        datap.sum.m_humidity += humi;
        datap.sum.m_pressure += pres;
        datap.sum.m_temperature += temp;


        notifyObservers();
    }

    void WeatherData::notifyObservers() {
        size_t size = observer_list.size();
        for (size_t i = 0; i < size; ++i) {
            Iobserver* observer = observer_list.removeFront();
            observer->update(datap);
            observer_list.insertBack(observer);
        }
    }
}
