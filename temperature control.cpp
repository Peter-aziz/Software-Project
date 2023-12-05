#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int temperatureAdjustment(int externalTemperature) {
    cout<<"Please choose the external temperature above which you'd like to change the AC settings: "; 
    int temperaturemax;
    cin>>temperaturemax;
    
    cout<<endl<<"Now enter the temperature you'd like to set the AC to: ";
    int tempAdjustment;
    cin>>tempAdjustment;
    
    if (externalTemperature >= temperaturemax)
    {
        cout << "temperature exceed the max" << endl;
        cout << "temperature adjusted to" << "  " << tempAdjustment;
    }

    else

        cout << "temperature below max,no action";

    return tempAdjustment;

}
int main() {
    
    int externaltemp = rand() % 45;
    cout << "External temp=" << externaltemp;
    temperatureAdjustment(externaltemp);
}
