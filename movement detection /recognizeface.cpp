#include <iostream>

bool randomBool() {
   return rand() > (RAND_MAX/2);
}

bool checkMovement() {
    return randomBool();
    
}

bool recognizeFace() {
    return randomBool();
    
}


void alertUser() {
    std::cout << "Motion detected! Unidentified person outside the house." << std::endl;
    std::cout << "Do you want to call the authorities? (Y/N): ";

    char choice;
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        
        std::cout << "Calling authorities..." << std::endl;
    } else {
        std::cout << "Ignoring the alert." << std::endl;
    }
}

int main() {
    if (checkMovement() && !recognizeFace()) {
        alertUser();
    }

    return 0;
}
