#include "Abiturient.h"

Abiturient::Abiturient() : yearOfZNO(0), ZNOCertificateNumber(0), ZNOPinCode(0), faculty(""), course(0), group(0) {}

Abiturient::Abiturient(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
    const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
    int ZNOPinCode, const std::string& faculty, int course, int group)
    : Person(id, surname, name, fatherName, address, phone),
    yearOfZNO(yearOfZNO), ZNOCertificateNumber(ZNOCertificateNumber), ZNOPinCode(ZNOPinCode),
    faculty(faculty), course(course), group(group) {}

Abiturient::Abiturient(const Abiturient& other)
    : Person(other), yearOfZNO(other.yearOfZNO), ZNOCertificateNumber(other.ZNOCertificateNumber),
    ZNOPinCode(other.ZNOPinCode), faculty(other.faculty), course(other.course), group(other.group) {}

Abiturient::~Abiturient() {}

void Abiturient::displayInfo() const {
    Person::displayInfo(); // Call the base class displayInfo method
    std::cout << "Year of ZNO: " << yearOfZNO << "\n"
        << "ZNO Certificate Number: " << ZNOCertificateNumber << "\n"
        << "ZNO Pin Code: " << ZNOPinCode << "\n"
        << "Faculty: " << faculty << "\n"
        << "Course: " << course << "\n"
        << "Group: " << group << "\n";
}
