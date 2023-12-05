#include <iostream>
using namespace std;

int get_lower_temp(){
    int low_temp;
    // getting lower limit
    cout << "enter lower temperature limit:";
    cin >>low_temp;
    bool got_low = false;
    while (got_low == false)
    if ((low_temp< 16) || (low_temp > 30)){
    cout << "invalid temperature - try values between 16 and 30" << endl;
    cin >> low_temp;
    } else{
    got_low = true;
    }
    return low_temp;
}

int get_upper_temp(int low_temp){
    int high_temp;
    // getting upper limit 
    cout << "enter upper temperature limit:";
    cin >>high_temp;
    bool got_high = false;
    while (got_high == false)
    if ((high_temp< 16) || (high_temp > 30) || (high_temp < low_temp)){
    cout << "invalid temperature - try values between 16 and 30 and higher than lower limit" << endl;
    cin >> high_temp;
    } else {
    got_high = true;
    }
    
    return high_temp;
}

int auto_set_temp(int lower_limit, int upper_limit, int current_temp){

    while (current_temp < lower_limit){
        cout << "heater activated" << endl;
        current_temp ++;
    }
    while (current_temp > upper_limit){
        cout << "AC activated" << endl;
        current_temp --;
    }
    return current_temp;
}

int main() {
    cout << "Enter a temperature range you find comfortable:" << endl;
    int lower_limit = get_lower_temp();
    int upper_limit = get_upper_temp(lower_limit);
    int currentTemperature = rand () % 55;
    while (currentTemperature > upper_limit || currentTemperature < lower_limit){
        cout << "temperature = "<<  currentTemperature << endl;
        currentTemperature = auto_set_temp(lower_limit,upper_limit,currentTemperature);
          cout << "temperature = "<<  currentTemperature << endl;
    }

    return 0;
}
