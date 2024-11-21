#pragma once
#include "WeatherData.h"
class List
{
	struct node {

		int data;
		node* next;

		

		node(WeatherData d):data(d.humidity),next(nullptr){}
	};


	node* m_head;
	size_t m_size;




	List();

	~List();




};

