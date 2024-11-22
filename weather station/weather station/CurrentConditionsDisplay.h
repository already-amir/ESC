#pragma once
#include"IObserver.h"
class CurrentConditionsDisplay: public IObserver
{
public:

	virtual void update() override;


};

