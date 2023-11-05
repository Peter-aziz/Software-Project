#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double internalTemp;

bool heaterMode (float externalTemperature)
{ 
    if (externalTemperature < 10)
    {
        internalTemp = 40;
        return true;
    }
        return false;
}


int main() 
{
    srand(time(0));
    float externalTemperature = rand () % 55;
    if (heaterMode(externalTemperature))
        cout<<"Heater Mode activated (40 degrees Celsius)";
    else
        cout<<"Current temperature is " << internalTemp;
}
