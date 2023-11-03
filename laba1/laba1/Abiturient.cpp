#include "Abiturient.h"

// ��������� ������������ �� �����������
Abiturient::Abiturient() {
    // ����������� ���� �� �������������
    id = 0;
    yearOfZNO = 0;
    ZNOCertificateNumber = 0;
    ZNOPinCode = 0;
}

Abiturient::Abiturient(int id, const std::string& surname, const std::string& name, const std::string& patronymic,
    const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
    int ZNOPinCode) {
    // ����������� ���� �� ���������� ����������
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
    // ����������� ���������
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
    std::cout << "�������: " << surname << std::endl;
    std::cout << "��'�: " << name << std::endl;
    std::cout << "�� �������: " << patronymic << std::endl;
    std::cout << "������: " << address << std::endl;
    std::cout << "�������: " << phone << std::endl;
    std::cout << "г� ���: " << yearOfZNO << std::endl;
    std::cout << "����� ����������� ���: " << ZNOCertificateNumber << std::endl;
    std::cout << "ϳ�-��� ����������� ���: " << ZNOPinCode << std::endl;
}