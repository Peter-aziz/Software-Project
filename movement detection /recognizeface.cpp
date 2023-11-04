#include <iostream>

bool randomBool() {
   return rand() > (RAND_MAX/2);
}
// Function to detect motion
bool checkMovement() {
    return randomBool();
    // Code to detect motion using sensors
    // Return true if motion is detected, false otherwise
}

// Function to recognize face
bool recognizeFace() {
    return randomBool();
    // Code to recognize face using facial recognition algorithm
    // Return true if face is recognized, false otherwise
}

// Function to alert user
void alertUser() {
    std::cout << "Motion detected! Unidentified person outside the house." << std::endl;
    std::cout << "Do you want to call the authorities? (Y/N): ";

    char choice;
    std::cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        // Code to call authorities
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
