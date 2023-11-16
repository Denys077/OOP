#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>

class Person {
public:
    Person(); // Default constructor
    Person(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
        const std::string& address, const std::string& phone);
    Person(const Person& other); // Copy constructor

    virtual ~Person(); // Virtual destructor

    virtual void displayInfo() const;

protected:
    // Common fields for both Person and Abiturient
    int id;
    std::string surname;
    std::string name;
    std::string fatherName;
    std::string address;
    std::string phone;
};

#endif // PERSON_H