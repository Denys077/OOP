#ifndef ABITURIENT_H
#define ABITURIENT_H

#include "Person.h"

class Abiturient : public Person {
public:
    Abiturient(); // Default constructor
    Abiturient(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
        const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
        int ZNOPinCode, const std::string& faculty, int course, int group);
    Abiturient(const Abiturient& other); // Copy constructor

    ~Abiturient(); // Destructor

    void displayInfo() const override;

    friend std::istream& operator>>(std::istream& input, Abiturient& abiturient);

private:
    // Additional fields for Abiturient
    int yearOfZNO;
    int ZNOCertificateNumber;
    int ZNOPinCode;
    std::string faculty;
    int course;
    int group;
};

#endif // ABITURIENT_H
