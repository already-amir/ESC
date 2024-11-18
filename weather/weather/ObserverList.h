#pragma once
#include "WeatherStation.h"
class ObserverList
{


	struct node {

		WeatherStation w;
		node* next;

		node(WeatherStation weather) :next(nullptr), w(weather) {};


	};
	node* m_begin;
	size_t m_size;

public:

	ObserverList();
	~ObserverList();

	void add(WeatherStation w);
	void

	


};

