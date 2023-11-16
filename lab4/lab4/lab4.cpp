#include <iostream>
#include "Person.h"
#include "Abiturient.h"
#include "Student.h"

int main() {
    setlocale(LC_ALL, "ukr");
    // Тестування класу Person
    Person person(1, "Іванов", "Іван", "Іванович", "вул. Головна, 1", "123-456-7890");
    std::cout << "Інформація про особу:\n";
    person.displayInfo();
    std::cout << "\n\n";

    // Тестування класу Abiturient
    Abiturient abiturient(2, "Петренко", "Марія", "Василівна", "вул. Дружби, 22", "987-654-3210",
        2023, 789456, 123456, "Інженерія", 1, 101);
    std::cout << "Інформація про абітурієнта:\n";
    abiturient.displayInfo();
    std::cout << "\n\n";

    // Тестування класу Student
    Student student(3, "Ковальчук", "Роман", "Олександрович", "вул. Лісова, 33", "555-123-4567",
        "Комп'ютерні науки", 2, 201);
    std::cout << "Інформація про студента:\n";
    student.displayInfo();

    return 0;
}
