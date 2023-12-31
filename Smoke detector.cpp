#include <iostream>
#include <chrono>
#include <thread>

int measurementTime;


// Function to simulate smoke amount measurement
float measureSmokeAmount() {
    // (replace with actual smoke sensor)
    float smokeAmount = (std::rand()%10)+1;

    return smokeAmount;
}

int main() {
    measurementTime = 30;
    while (true) {
        
        // Measure smoke amount
        float smokeAmount = measureSmokeAmount();
        
        // Smoke amount for triggering the alarm
        float smokeNormalAmount = 9.0;

        std::cout << "Smoke Level: " << smokeAmount << " PPM\n";

        // Check if smoke level exceeds the normal
                if (smokeAmount > smokeNormalAmount) {
                    std::cout << "Smoke level exceeds Normal! Triggering alarm !!";
                    // Code to trigger the alarm should be here
                }
        // Wait for the specified measurement interval
        std::this_thread::sleep_for(std::chrono::seconds(measurementTime));
    }

    return 0;
}
