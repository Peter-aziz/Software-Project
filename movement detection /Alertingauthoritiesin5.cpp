#include <iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;
int secondsBeforeAlerting; 

void chooseWaitTimeBeforeAlert ()
{
	cout<<”Please type in the number of seconds upon detecting unknown movements the system should wait before it automatically alerts authorities: ”;
int seconds;
cin>>seconds;
secondsBeforeAlerting = seconds;
}

void AlertPhone() {
    std::cout << "Movement has been detected. Alert the authorities? Reply 'yes' or 'no' " << std::endl;
}

void AlertAuthorities() {
    std::cout << "Authorities have been alerted!" << std::endl;
}

bool randomBool() {
   return rand() > (RAND_MAX/2);
}

void checkMovement() {
    bool isthereMovementDetected = randomBool(); 

    if (isthereMovementDetected) {

        AlertPhone();
         bool didUserRespond = false;
         std::string userresponse;
        std::thread t1([&]() {
       std::cin >> userresponse;
       });
   std::this_thread::sleep_for(std::chrono::seconds(10));
   t1.detach();
        if (userresponse == "yes" || userresponse == "YES" || userresponse == "Yes" ) {
            AlertAuthorities();
            return;
        }
        else if (userresponse == "no" || userresponse == "NO" || userresponse == "No" ){
            return;
        }
   std::this_thread::sleep_for(std::chrono::seconds(secondsBeforeAlerting));
        if (!didUserRespond) {
            std::cout << "User didn't respond. Alerting authorities..." << std::endl;
            AlertAuthorities();
        }
    }
}

int main() {
    checkMovement();

    return 0;
}
