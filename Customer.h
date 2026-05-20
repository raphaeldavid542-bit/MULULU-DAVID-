#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Person.h"

class Customer : public Person {
private:
    std::string drivingLicenseNumber;

public:
    Customer(int idNum, std::string n, std::string pNum, std::string dlNum)
        : Person(idNum, n, pNum), drivingLicenseNumber(dlNum) {}

    void displayInfo() const {
        std::cout << "Customer ID: " << id
                  << ", Name: " << name
                  << ", Phone: " << phoneNumber
                  << ", Driving License: " << drivingLicenseNumber << std::endl;
    }
};

#endif
