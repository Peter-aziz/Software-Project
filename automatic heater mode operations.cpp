#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double internalTemp;
double customHeaterTemp;
double tempWhenTooCold;

void CustomizeHeaterSettings()
{
    cout<<"Please choose the external temperature at which you would like to turn the house's heater on:  "; 
    cin>>tempWhenTooCold;
    cout<<endl;
    
    cout<<"Now please determine heater mode, which is the temperature (in degrees Celsius) you would like to set the heater to when the house is too cold: ";
    cin>>customHeaterTemp;
    
}

bool heaterMode (float externalTemperature)
{ 
    if (externalTemperature <= tempWhenTooCold)
    {
        internalTemp = customHeaterTemp;
        return true;
    }
        return false;
}


int main() 
{
    CustomizeHeaterSettings();
    float externalTemperature = rand () % 55;
    if (heaterMode(externalTemperature))
        cout<<"Heater Mode activated ("<<customHeaterTemp<<" degrees Celsius)";
    else
        cout<<"Current temperature is " << internalTemp;
}
