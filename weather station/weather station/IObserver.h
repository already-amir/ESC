#pragma once
#include"WeatherData.h"
#include "data.h"



class IObserver 
{
	friend class  WeatherData;
	int id;
public:
	data d;
	
	static int idd ;


	virtual void update();




	
};

