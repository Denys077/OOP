#ifndef ABITURIENT_H
#define ABITURIENT_H

#include <iostream>
#include <string>

class Abiturient {
public:
    Abiturient(); // ����������� �� �������������
    Abiturient(int id, const std::string& surname, const std::string& name, const std::string& patronymic,
        const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
        int ZNOPinCode);
    Abiturient(const Abiturient& other); // ����������� ���������

    ~Abiturient();

    void displayInfo() const;


private:
    // ���� �����
    int id;
    std::string surname;
    std::string name;
    std::string patronymic;
    std::string address;
    std::string phone;
    int yearOfZNO;
    int ZNOCertificateNumber;
    int ZNOPinCode;
};

#endif // ABITURIENT_H
