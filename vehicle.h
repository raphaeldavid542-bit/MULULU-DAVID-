#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

class Vehicle {
private:
    std::string registrationNumber;
    std::string brand;
    std::string model;
    double dailyRate;
    bool availabilityStatus;

public:
    Vehicle(std::string regNum, std::string b, std::string m, double rate)
        : registrationNumber(regNum), brand(b), model(m), dailyRate(rate), availabilityStatus(true) {}

    virtual ~Vehicle() {}

    // Encapsulation through setters and getters
    std::string getRegistrationNumber() const { return registrationNumber; }
    std::string getBrand() const { return brand; }
    std::string getModel() const { return model; }
    double getDailyRate() const { return dailyRate; }
    bool isAvailable() const { return availabilityStatus; }

    void setAvailability(bool status) { availabilityStatus = status; }

    virtual void displayInfo() const = 0; // Pure virtual function
    virtual double calculateRent(int days) const = 0; // Pure virtual function
};

#endif
