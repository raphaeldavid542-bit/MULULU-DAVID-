#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string regNum, std::string b, std::string m, double rate)
        : Vehicle(regNum, b, m, rate) {}

    void displayInfo() const override {
        std::cout << "Car - Reg: " << getRegistrationNumber()
                  << ", Brand: " << getBrand()
                  << ", Model: " << getModel()
                  << ", Daily Rate: $" << getDailyRate()
                  << ", Available: " << (isAvailable() ? "Yes" : "No") << std::endl;
    }

    double calculateRent(int days) const override {
        return getDailyRate() * days;
    }
};

#endif
