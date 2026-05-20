#include <iostream>
#include "RentalManager.h"
#include "Car.h"
#include "Bike.h"
#include "Truck.h"
#include "Customer.h"

void showMenu() {
    std::cout << "1. Vehicle Management" << std::endl;
    std::cout << "2. Customer Management" << std::endl;
    std::cout << "3. Rental Management" << std::endl;
    std::cout << "4. Exit" << std::endl;
}

int main() {
    RentalManager manager;

    // Sample vehicle and customer registration
    manager.addVehicle(new Car("ABC123", "Toyota", "Camry", 50));
    manager.addVehicle(new Bike("DEF456", "Yamaha", "YZF-R3", 30));
    manager.addVehicle(new Truck("GHI789", "Ford", "F-150", 80, 20));
    manager.registerCustomer(Customer(1, "John Doe", "123-456-7890", "DL1234567"));

    int choice;
    do {
        showMenu();
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                manager.displayVehicles();
                break;
            case 2:
                // Handle customer management
                break;
            case 3:
                // Handle rental management
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
