#include <iostream>

class LightSwitch { // creating a class in order to edit it freely and have the state of the switch 
private:
    bool isOn;

public:
    LightSwitch() {
        isOn = false; // Initially, the light switch is off
    }

    void activate() {
        isOn = true;
        std::cout << "Light switch activated." << std::endl; // tell the user that all lights are going to be switched on
    }

    void deactivate() {
        isOn = false;
        std::cout << "Light switch deactivated." << std::endl; // tell the user that the light switch is off
    }

    bool isActivated() {
        return isOn;
    }
};

int main() {
    LightSwitch lightSwitch;

    std::cout << "Welcome to the light switch simulator!" << std::endl;

    char choice;
    do {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Activate light switch" << std::endl;
        std::cout << "2. Deactivate light switch" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice (1-3): "; // allow the user to choose the option they want 
        std::cin >> choice;

        switch (choice) {
            case '1':
                lightSwitch.activate();
                break;
            case '2':
                lightSwitch.deactivate();
                break;
            case '3':
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl; // in case the user doesn't enter the correct input
                break;
        }

        std::cout << std::endl;
    } while (choice != '3');  // does the above commands continuously as long as the user doesn't enter 3

    return 0;
}