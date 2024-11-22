#pragma once
class data
{
	int m_tempryture;
	int m_humidity;
	int m_presure;
	friend class WeatherData;
	friend class IObserver;
};

