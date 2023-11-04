#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int percentageWindowBlindIsOpen (float solarIrradiance)
{
    if (solarIrradiance >= 1350 || solarIrradiance <= 1000)
        return 0;
    else 
        return 75;
}

int main()
{
	srand(time(0));
	float solarIrradiance = rand () % 2000;
	int windowBlindsOpen = percentageWindowBlindIsOpen (solarIrradiance);
	cout<<"Current Solar Irradiance is: " << solarIrradiance<<", automatically opening/closing the blinds " << windowBlindsOpen<<"%";
}