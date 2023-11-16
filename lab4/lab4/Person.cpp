#include "Person.h"

Person::Person() : id(0), surname(""), name(""), fatherName(""), address(""), phone("") {}

Person::Person(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
    const std::string& address, const std::string& phone)
    : id(id), surname(surname), name(name), fatherName(fatherName), address(address), phone(phone) {}

Person::Person(const Person& other)
    : id(other.id), surname(other.surname), name(other.name), fatherName(other.fatherName),
    address(other.address), phone(other.phone) {}

Person::~Person() {}

void Person::displayInfo() const {
    std::cout << "ID: " << id << "\n"
        << "Surname: " << surname << "\n"
        << "Name: " << name << "\n"
        << "Father Name: " << fatherName << "\n"
        << "Address: " << address << "\n"
        << "Phone: " << phone << "\n";
}
