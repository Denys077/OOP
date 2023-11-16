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

std::istream& operator>>(std::istream& input, Person& person)
{
    std::cout << "Enter ID: ";
    input >> person.id;

    std::cout << "Enter Surname: ";
    input.ignore(); // Ignore newline left in the buffer
    std::getline(input, person.surname);

    std::cout << "Enter Name: ";
    std::getline(input, person.name);

    std::cout << "Enter Father's Name: ";
    std::getline(input, person.fatherName);

    std::cout << "Enter Address: ";
    std::getline(input, person.address);

    std::cout << "Enter Phone: ";
    std::getline(input, person.phone);

    return input;
}