#ifndef BIKE_H
#define BIKE_H

#include "Vehicle.h"

class Bike : public Vehicle {
public:
    Bike(std::string regNum, std::string b, std::string m, double rate)
        : Vehicle(regNum, b, m, rate) {}

    void displayInfo() const override {
        std::cout << "Bike - Reg: " << getRegistrationNumber()
                  << ", Brand: " << getBrand()
                  << ", Model: " << getModel()
                  << ", Daily Rate: $" << getDailyRate()
                  << ", Available: " << (isAvailable() ? "Yes" : "No") << std::endl;
    }

    double calculateRent(int days) const override {
        return getDailyRate() * days * 0.8; // Bike rental is cheaper
    }
};

#endif
