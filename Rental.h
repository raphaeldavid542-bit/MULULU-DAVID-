#ifndef RENTAL_H
#define RENTAL_H

#include "Customer.h"
#include "Vehicle.h"
#include <string>
#include <ctime>

class Rental {
private:
    std::string rentalID;
    Customer customer;
    Vehicle* vehicle; // Pointer to allow polymorphic behavior
    std::string rentalDate;
    std::string returnDate;
    double totalCost;

public:
    Rental(std::string id, Customer cust, Vehicle* veh, std::string rentDate, std::string retDate, double cost)
        : rentalID(id), customer(cust), vehicle(veh), rentalDate(rentDate), returnDate(retDate), totalCost(cost) {}

    void createRental() {
        // Logic to create a rental
        std::cout << "Rental created for " << customer.getName() << " with vehicle " << vehicle->getRegistrationNumber() << std::endl;
    }

    void returnVehicle() {
        // Logic for returning vehicle
        std::cout << "Vehicle returned: " << vehicle->getRegistrationNumber() << std::endl;
    }

    void generateReceipt() {
        // Generate receipt logic
        std::cout << "Receipt for rental ID: " << rentalID << " Total Cost: $" << totalCost << std::endl;
    }

    double calculatePenalty(int lateDays) {
        return totalCost * 0.1 * lateDays; // 10% penalty per day late
    }
};

#endif
