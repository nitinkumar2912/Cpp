#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

class Student : public Person {
private:
    int rollNo;

public:
    Student(string name, int age, int rollNo);
    friend ostream& operator<<(ostream& out, const Student& s);
};

#endif