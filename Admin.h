#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"

class Admin : public Person {
public:
    Admin(int idNum, std::string n, std::string pNum)
        : Person(idNum, n, pNum) {}

    // Additional functions to manage the system can be added here
};

#endif
