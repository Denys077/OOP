#include "Abiturient.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    // Створення трьох об'єктів класу Abiturient
    Abiturient abiturient1(1, "Іванов", "Іван", "Іванович", "Київ", "123456789", 2022, 12345, 6789);
    Abiturient abiturient2(2, "Петров", "Петро", "Петрович", "Львів", "987654321", 2022, 54321, 9876);
    Abiturient abiturient3(3, "Сидоров", "Олександр", "Олександрович", "Одеса", "555555555", 2022, 67890, 1234);

    // Виведення інформації про абітурієнтів
    std::cout << "Інформація про абітурієнта 1:" << std::endl;
    abiturient1.displayInfo();

    std::cout << "\nІнформація про абітурієнта 2:" << std::endl;
    abiturient2.displayInfo();

    std::cout << "\nІнформація про абітурієнта 3:" << std::endl;
    abiturient3.displayInfo();

    return 0;
}
