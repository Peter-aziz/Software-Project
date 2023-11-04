#include <iostream>
#include <cstdlib>

using namespace std;

int temperatureadjustment(int internaltemperature) {
    int temperaturemax = 35;
    int tempadjustment = 25;
    if (internaltemperature >= temperaturemax)
    {
        cout << "temperature exceed the max" << endl;
        cout << "temperature adjusted to" << "  " << tempadjustment;
    }

    else

        cout << "temperature below max,no action";

    return tempadjustment;

}
int main() {
    
    int internaltemp = rand() % 45;
    cout << "internal temp=" << internaltemp;
    temperatureadjustment(internaltemp);


}
