//
//  main.cpp
//  Software project
//
//  Created by Mariam Maged Mohamed Bahgat  on 02/11/2023.
//

#include <iostream>
#include <chrono>
#include <thread>

// Function to simulate smoke amount measurement
float measureSmokeAmount() {
    // (replace with actual smoke sensor)
    float smokeAmount = 4.5;

    return smokeAmount;
}

int main() {
    int measurementTime = 120; // Two minutes (in seconds)

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
