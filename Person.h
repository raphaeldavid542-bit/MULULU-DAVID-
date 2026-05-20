#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
protected:
    int id;
    std::string name;
    std::string phoneNumber;

public:
    Person(int idNum, std::string n, std::string pNum)
        : id(idNum), name(n), phoneNumber(pNum) {}

    virtual ~Person() {}

    int getId() const { return id; }
    std::string getName() const { return name; }
    std::string getPhoneNumber() const { return phoneNumber; }
};

#endif
