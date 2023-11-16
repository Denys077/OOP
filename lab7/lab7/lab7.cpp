#include <iostream>
#include <vector>
#include <algorithm> // for std::remove_if

#include "Person.h"
#include "Student.h"
#include "Abiturient.h"

int main() {
    std::vector<Person*> people; // Vector of pointers to the base class

    // Interactive menu to create objects and fill the vector
    char choice;
    do {
        std::cout << "Choose an option:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Add Abiturient\n";
        std::cout << "3. Display Info\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case '1': {
            Student* student = new Student();
            std::cin >> *student;
            people.push_back(student);
            break;
        }
        case '2': {
            Abiturient* abiturient = new Abiturient();
            std::cin >> *abiturient;
            people.push_back(abiturient);
            break;
        }
        case '3': {
            for (const auto& person : people) {
                person->displayInfo();
                std::cout << "\n";
            }
            break;
        }
        case '4':
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '4');

    // Create a new vector and copy objects from the first vector
    std::vector<Person*> secondVector(people.begin(), people.end());

    // Remove all elements of the first subclass from the first vector
    people.erase(std::remove_if(people.begin(), people.end(), [](Person* p) {
        return dynamic_cast<Student*>(p) != nullptr; // Check if it's a Student
        }), people.end());

    // Remove all elements of the second subclass from the second vector
    secondVector.erase(std::remove_if(secondVector.begin(), secondVector.end(), [](Person* p) {
        return dynamic_cast<Abiturient*>(p) != nullptr; // Check if it's an Abiturient
        }), secondVector.end());

    // Display the contents of both vectors
    std::cout << "\nFirst Vector (after removing Students):\n";
    for (const auto& person : people) {
        person->displayInfo();
        std::cout << "\n";
    }

    std::cout << "\nSecond Vector (after removing Abiturients):\n";
    for (const auto& person : secondVector) {
        person->displayInfo();
        std::cout << "\n";
    }

    // Clean up memory by deleting the objects
    for (auto& person : people) {
        delete person;
    }

    for (auto& person : secondVector) {
        delete person;
    }

    return 0;
}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iterator>
//#include <random>
//
//int main() {
//    // Створення першого вектора і заповнення його за допомогою індексу
//    std::vector<int> vector1(10);
//    for (int i = 0, value = 1; i < 10; ++i, value += 2) {
//        vector1[i] = value;
//    }
//
//    // Створення генератора випадкових чисел для другого вектора
//    std::random_device rd;
//    std::mt19937 generator(rd());
//    std::uniform_int_distribution<int> distribution(0, 100);
//
//    // Створення другого вектора і заповнення його за допомогою ітератора
//    std::vector<int> vector2(10);
//    std::generate(vector2.begin(), vector2.end(), [&]() { return distribution(generator) * 2; });
//
//    // Сортування обох векторів
//    std::sort(vector1.begin(), vector1.end());
//    std::sort(vector2.begin(), vector2.end());
//
//    // Створення третього вектора для об'єднання
//    std::vector<int> vector3;
//    vector3.reserve(vector1.size() + vector2.size());
//
//    // Об'єднання векторів за допомогою алгоритму std::merge()
//    std::merge(
//        vector1.begin(), vector1.end(),
//        vector2.begin(), vector2.end(),
//        std::back_inserter(vector3)
//    );
//
//    // Виведення вмісту трьох векторів на екран
//    std::cout << "Vector 1: ";
//    for (const auto& element : vector1) {
//        std::cout << element << " ";
//    }
//    std::cout << "\n";
//
//    std::cout << "Vector 2: ";
//    for (const auto& element : vector2) {
//        std::cout << element << " ";
//    }
//    std::cout << "\n";
//
//    std::cout << "Merged Vector: ";
//    for (const auto& element : vector3) {
//        std::cout << element << " ";
//    }
//    std::cout << "\n";
//
//    return 0;
//}
