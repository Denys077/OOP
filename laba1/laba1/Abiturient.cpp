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