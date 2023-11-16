#include "Student.h"

Student::Student() : faculty(""), course(0), group(0) {}

Student::Student(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
    const std::string& address, const std::string& phone, const std::string& faculty, int course, int group)
    : Person(id, surname, name, fatherName, address, phone),
    faculty(faculty), course(course), group(group) {}

Student::Student(const Student& other)
    : Person(other), faculty(other.faculty), course(other.course), group(other.group) {}

Student::~Student() {}

void Student::displayInfo() const {
    Person::displayInfo(); // Call the base class displayInfo method
    std::cout << "Faculty: " << faculty << "\n"
        << "Course: " << course << "\n"
        << "Group: " << group << "\n";
}

std::istream& operator>>(std::istream& input, Student& student)
{
    

    // Call the base class operator>> for common fields
    input >> static_cast<Person&>(student);
    std::cout << "Enter Faculty: ";
    input.ignore(); // Ignore newline left in the buffer
    std::getline(input, student.faculty);

    std::cout << "Enter Course: ";
    input >> student.course;

    std::cout << "Enter Group: ";
    input >> student.group;

    return input;
}
