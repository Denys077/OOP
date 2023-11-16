#include <iostream>
#include "Person.h"
#include "Abiturient.h"
#include "Student.h"

int main() {
    setlocale(LC_ALL, "ukr");
    // ���������� ����� Person
    Person person(1, "������", "����", "��������", "���. �������, 1", "123-456-7890");
    std::cout << "���������� ��� �����:\n";
    person.displayInfo();
    std::cout << "\n\n";

    // ���������� ����� Abiturient
    Abiturient abiturient(2, "��������", "����", "��������", "���. ������, 22", "987-654-3210",
        2023, 789456, 123456, "��������", 1, 101);
    std::cout << "���������� ��� ��������:\n";
    abiturient.displayInfo();
    std::cout << "\n\n";

    // ���������� ����� Student
    Student student(3, "���������", "�����", "�������������", "���. ˳����, 33", "555-123-4567",
        "����'����� �����", 2, 201);
    std::cout << "���������� ��� ��������:\n";
    student.displayInfo();

    return 0;
}
