#include "WeatherData.h"
#include <exception>


WeatherData::WeatherData(int temp, int humi, int pre)
{
	weather_update(temp, pre, humi);
}

WeatherData::WeatherData()
{
	m_data.m_humidity = 0;
	m_data.m_presure = 0;
	m_data.m_tempryture = 0;
}



WeatherData::~WeatherData()
{
}

void WeatherData::add(IObserver subescriber) {
	observer_list.insertBack(subescriber);
}

void WeatherData::remove(IObserver subescriber)
{
	for (size_t i = 0; i < observer_list.size(); i++) {
		if (subescriber.id == observer_list.front().id) {
			observer_list.removeFront();
			return;
		}
		else {
			IObserver ob = observer_list.front();
			observer_list.removeFront();
			observer_list.insertBack(ob);

		}
	}
	throw std::exception("NOT FOUND IN LIST");
}

void WeatherData::weather_update(int t, int p, int h)
{
	m_data.m_humidity = h;
	m_data.m_presure = p;
	m_data.m_tempryture = t;
	for (int i = 0; i < observer_list.size(); i++) {
		observer_list.front().d.m_humidity;
	}
}

void WeatherData::weather_notificaton()
{
	
}
