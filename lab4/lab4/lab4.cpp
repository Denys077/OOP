#include <iostream>
#include "Person.h"
#include "Abiturient.h"
#include "Student.h"

void displayMenu() {
    std::cout << "Menu:\n"
        << "1. Create Abiturient\n"
        << "2. Create Student\n"
        << "3. Exit\n";
}

int main() {
    const int arraySize = 2;
    Person* personArray[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        displayMenu();
        int choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            personArray[i] = new Abiturient();
            std::cin >> *(dynamic_cast<Abiturient*>(personArray[i]));
            break;
        }
        case 2: {
            personArray[i] = new Student();
            std::cin >> *(dynamic_cast<Student*>(personArray[i]));
            break;
        }
        case 3: {
            // Exit the loop
            i = arraySize;
            break;
        }
        default: {
            std::cout << "Invalid choice. Please try again.\n";
            --i; // To repeat the loop iteration
            break;
        }
        }
    }

    std::cout << "\nData of created objects:\n";
    // Call the purely virtual method using a loop
    for (int i = 0; i < arraySize; ++i) {
        personArray[i]->displayInfo();
        std::cout << "\n";
    }

    // Clean up dynamically allocated memory
    for (int i = 0; i < arraySize; ++i) {
        delete personArray[i];
    }

    return 0;
}
