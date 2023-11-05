#include <iostream>
#include <vector>

class Light {
private:
    bool isOn;
public:
    Light() {
        isOn = false; // Initially, the light is off
    }

    void switchOn() {
        isOn = true;
        std::cout << "Light switched on." << std::endl;
    }

    void switchOff() {
        isOn = false;
        std::cout << "Light switched off." << std::endl;
    }

    bool isSwitchedOn() {
        return isOn;
    }
};

class Lights {
private:
    std::vector<Light> lights;
public:
    void addLight() {
        Light newLight;
        lights.push_back(newLight);
        std::cout << "Light added." << std::endl;
    }
    void removeLight(int index) {
        if (index >= 0 && index < lights.size()) {
            lights.erase(lights.begin() + index);
            std::cout << "Light removed." << std::endl;
        } else {
            std::cout << "Invalid light index." << std::endl;
        }
    }
    void switchOnAllLights() {
        for (auto& light : lights) {
            light.switchOn();
        }
    }

    void switchOffAllLights() {
        for (auto& light : lights) {
            light.switchOff();
        }
    }
    void switchOnLight(int index) {
        if (index >= 0 && index < lights.size()) {
            lights[index].switchOn();
        } else {
            std::cout << "Invalid light index." << std::endl;
        }
    }
    void switchOffLight(int index) {
        if (index >= 0 && index < lights.size()) {
            lights[index].switchOff();
        } else {
            std::cout << "Invalid light index." << std::endl;
        }
    }
};

int main() {
    Lights Lights;
    std::cout << "Welcome to the light switch simulator!" << std::endl;
    int choice;
    do {
        std::cout << "Choose an option:" << std::endl;
        std::cout << "1. Switch on all lights" << std::endl;
        std::cout << "2. Switch off all lights" << std::endl;
        std::cout << "3. Switch on a specific light" << std::endl;
        std::cout << "4. Switch off a specific light" << std::endl;
        std::cout << "5. Add a light" << std::endl;
        std::cout << "6. Remove a light" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice (1-7): ";
        // Clear input buffer
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> choice;
        switch (choice) {
            case 1:
                Lights.switchOnAllLights();
                break;
            case 2:
                Lights.switchOffAllLights();
                break;
            case 3: {
                int lightIndex;
                std::cout << "Enter the index of the light to switch on: ";
                std::cin >> lightIndex;
                Lights.switchOnLight(lightIndex);
                break;
            }
            case 4: {
                int lightIndex;
                std::cout << "Enter the index of the light to switch off: ";
                std::cin >> lightIndex;
                Lights.switchOffLight(lightIndex);
                break;
            }
            case 5:
                Lights.addLight();
                break;
            case 6: {
                int lightIndex;
                std::cout << "Enter the index of the light to remove: ";
                std::cin >> lightIndex;
                Lights.removeLight(lightIndex);
                break;
            }
            case 7:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
        std::cout << std::endl;
    } while (choice != 7);
    return 0;
}
