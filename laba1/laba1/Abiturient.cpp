#include "Abiturient.h"

// Реалізація конструкторів та деструктора
Abiturient::Abiturient() {
    // Ініціалізація полів за замовчуванням
    id = 0;
    yearOfZNO = 0;
    ZNOCertificateNumber = 0;
    ZNOPinCode = 0;
}

Abiturient::Abiturient(int id, const std::string& surname, const std::string& name, const std::string& patronymic,
    const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
    int ZNOPinCode) {
    // Ініціалізація полів за переданими значеннями
    this->id = id;
    this->surname = surname;
    this->name = name;
    this->patronymic = patronymic;
    this->address = address;
    this->phone = phone;
    this->yearOfZNO = yearOfZNO;
    this->ZNOCertificateNumber = ZNOCertificateNumber;
    this->ZNOPinCode = ZNOPinCode;
}

Abiturient::Abiturient(const Abiturient& other) {
    // Конструктор копіювання
    this->id = other.id;
    this->surname = other.surname;
    this->name = other.name;
    this->patronymic = other.patronymic;
    this->address = other.address;
    this->phone = other.phone;
    this->yearOfZNO = other.yearOfZNO;
    this->ZNOCertificateNumber = other.ZNOCertificateNumber;
    this->ZNOPinCode = other.ZNOPinCode;
}

Abiturient::~Abiturient() {
}
void Abiturient::displayInfo() const {
    std::cout << "ID: " << id << std::endl;
    std::cout << "Прізвище: " << surname << std::endl;
    std::cout << "Ім'я: " << name << std::endl;
    std::cout << "По батькові: " << patronymic << std::endl;
    std::cout << "Адреса: " << address << std::endl;
    std::cout << "Телефон: " << phone << std::endl;
    std::cout << "Рік ЗНО: " << yearOfZNO << std::endl;
    std::cout << "Номер сертифікату ЗНО: " << ZNOCertificateNumber << std::endl;
    std::cout << "Пін-код сертифікату ЗНО: " << ZNOPinCode << std::endl;
}

std::istream& operator>>(std::istream& input, Abiturient& abiturient)
{
    std::cout << "Enter Abiturient information:" << std::endl;

    std::cout << "ID: ";
    input >> abiturient.id;

    std::cout << "Surname: ";
    input >> abiturient.surname;

    std::cout << "Name: ";
    input >> abiturient.name;

    std::cout << "Patronymic: ";
    input >> abiturient.patronymic;

    std::cout << "Address: ";
    input.ignore(); // Ignore the newline character left in the buffer
    std::getline(input, abiturient.address);

    std::cout << "Phone: ";
    input >> abiturient.phone;

    std::cout << "Year of ZNO: ";
    input >> abiturient.yearOfZNO;

    std::cout << "ZNO Certificate Number: ";
    input >> abiturient.ZNOCertificateNumber;

    std::cout << "ZNO Pin Code: ";
    input >> abiturient.ZNOPinCode;

    return input;
}

std::ostream& operator<<(std::ostream& output, const Abiturient& abiturient)
{
    output << "ID: " << abiturient.id << std::endl;
    output << "Surname: " << abiturient.surname << std::endl;
    output << "Name: " << abiturient.name << std::endl;
    output << "Patronymic: " << abiturient.patronymic << std::endl;
    output << "Address: " << abiturient.address << std::endl;
    output << "Phone: " << abiturient.phone << std::endl;
    output << "Year of ZNO: " << abiturient.yearOfZNO << std::endl;
    output << "ZNO Certificate Number: " << abiturient.ZNOCertificateNumber << std::endl;
    output << "ZNO Pin Code: " << abiturient.ZNOPinCode << std::endl;

    return output;
}
