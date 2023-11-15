#include "Abiturient.h"
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ukr");
    
    Abiturient abiturient1;
    
    std::cout << "Enter information for Abiturient 1:" << std::endl;
    std::cin >> abiturient1;
        
    std::cout << "\nInformation for Abiturient 1:" << std::endl;
    cout << abiturient1 << endl;
    

    return 0;

   

    
}
