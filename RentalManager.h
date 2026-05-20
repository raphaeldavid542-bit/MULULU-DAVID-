#ifndef RENTAL_MANAGER_H
#define RENTAL_MANAGER_H

#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>
#include "Vehicle.h"
#include "Customer.h"
#include "Rental.h"

class RentalManager {
private:
    std::vector<Vehicle*> vehicles;
    std::vector<Customer> customers;
    std::vector<Rental> rentals;

public:
    ~RentalManager() {
        // Free dynamically allocated vehicles
        for (auto vehicle : vehicles) {
            delete vehicle;
        }
    }

    void addVehicle(Vehicle* vehicle) {
        vehicles.push_back(vehicle);
    }

    void removeVehicle(const std::string& regNum) {
        vehicles.erase(std::remove_if(vehicles.begin(), vehicles.end(),
            [&regNum](Vehicle* v) { return v->getRegistrationNumber() == regNum; }), vehicles.end());
    }

    void updateVehicle(const std::string& regNum, double newRate) {
        for (auto& vehicle : vehicles) {
            if (vehicle->getRegistrationNumber() == regNum) {
                // ... update logic here
                break;
            }
        }
    }

    void displayVehicles() {
        for (auto vehicle : vehicles) {
            vehicle->displayInfo();
        }
    }

    void registerCustomer(const Customer& customer) {
        customers.push_back(customer);
    }

    // Further methods for rental management omitted for brevity...
    // Load/Save data, renting and returning vehicles, etc.
};

#endif
