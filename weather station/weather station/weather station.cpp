
#include <iostream>
#include"WeatherData.h"
#include"IObserver.h"
#include"CurrentConditionsDisplay.h"

using namespace std;

int main()
{
    

    WeatherData tabriz_station(9, 2, 1);

    CurrentConditionsDisplay shabake1;


    shabake1.update();
    
    
}

