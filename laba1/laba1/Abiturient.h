#ifndef ABITURIENT_H
#define ABITURIENT_H

#include <iostream>
#include <string>

#include <istream>
class Abiturient {
public:
    Abiturient(); // ����������� �� �������������
    Abiturient(int id, const std::string& surname, const std::string& name, const std::string& patronymic,
        const std::string& address, const std::string& phone, int yearOfZNO, int ZNOCertificateNumber,
        int ZNOPinCode);
    Abiturient(const Abiturient& other); // ����������� ���������

    ~Abiturient();

    void displayInfo() const;

    friend std::istream&  operator>>(std::istream& input, Abiturient& abiturient);
    friend std::ostream& operator<<(std::ostream& output, const Abiturient& abiturient);


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
