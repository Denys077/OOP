#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student(); // Default constructor
    Student(int id, const std::string& surname, const std::string& name, const std::string& fatherName,
        const std::string& address, const std::string& phone, const std::string& faculty, int course, int group);
    Student(const Student& other); // Copy constructor

    ~Student(); // Destructor

    void displayInfo() const override;
    friend std::istream& operator>>(std::istream& input, Student& student);

private:
    // Additional fields for Student
    std::string faculty;
    int course;
    int group;
};

#endif // STUDENT_H
