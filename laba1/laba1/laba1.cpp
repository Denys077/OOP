#include "Abiturient.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    // ��������� ����� ��'���� ����� Abiturient
    Abiturient abiturient1(1, "������", "����", "��������", "���", "123456789", 2022, 12345, 6789);
    Abiturient abiturient2(2, "������", "�����", "��������", "����", "987654321", 2022, 54321, 9876);
    Abiturient abiturient3(3, "�������", "���������", "�������������", "�����", "555555555", 2022, 67890, 1234);

    // ��������� ���������� ��� ��������
    std::cout << "���������� ��� �������� 1:" << std::endl;
    abiturient1.displayInfo();

    std::cout << "\n���������� ��� �������� 2:" << std::endl;
    abiturient2.displayInfo();

    std::cout << "\n���������� ��� �������� 3:" << std::endl;
    abiturient3.displayInfo();

    return 0;
}
