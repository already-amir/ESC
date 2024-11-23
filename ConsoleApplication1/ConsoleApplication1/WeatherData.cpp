#include "WeatherData.h"


namespace WeatherNamespace {
  
    WeatherData::WeatherData(int temp, int humi, int pres) {
        setWeatherData(temp, pres, humi);
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
        m_data.m_temperature = temp;
        m_data.m_pressure = pres;
        m_data.m_humidity = humi;
        notifyObservers();
    }

    void WeatherData::notifyObservers() {
        size_t size = observer_list.size();
        for (size_t i = 0; i < size; ++i) {
            Iobserver* observer = observer_list.removeFront();
            observer->update(m_data);
            observer_list.insertBack(observer);
        }
    }
}
