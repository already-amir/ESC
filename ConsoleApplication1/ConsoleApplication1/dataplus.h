#pragma once
#include "data.h"



namespace WeatherNamespace {
	class dataplus
	{
	public:
		data curr;
		data min;
		data max;
		data sum;
		int counter;
		friend class WeatherData;
		friend class Iobserver;

	};

}
