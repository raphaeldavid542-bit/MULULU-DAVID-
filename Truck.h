#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    double extraCharge;

public:
    Truck(std::string regNum, std::string b, std::string m, double rate, double extra)
        : Vehicle(regNum, b, m, rate), extraCharge(extra) {}

    void displayInfo() const override {
        std::cout << "Truck - Reg: " << getRegistrationNumber()
                  << ", Brand: " << getBrand()
                  << ", Model: " << getModel()
                  << ", Daily Rate: $" << getDailyRate()
                  << ", Extra Charge: $" << extraCharge
                  << ", Available: " << (isAvailable() ? "Yes" : "No") << std::endl;
    }

    double calculateRent(int days) const override {
        return (getDailyRate() * days) + extraCharge;
    }
};

#endif
