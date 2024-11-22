#pragma once
#include"List.h"
#include"IObserver.h"
#include"data.h"



class WeatherData
{
	friend class IObserver;
public:
	data m_data;
	List<IObserver> observer_list;


public:
	WeatherData(int temp,int humi,int pre);
	WeatherData();
	~WeatherData();





	void weather_update(int t, int p, int h);
	void weather_notificaton();


	void add(IObserver subescriber);
	void remove(IObserver subescriber);
	

};

