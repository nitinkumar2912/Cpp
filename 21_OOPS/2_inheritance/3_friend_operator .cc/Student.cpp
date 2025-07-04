#include "Student.h"

Student::Student(string name, int age, int rollNo)
    : Person(name, age) {
    this->rollNo = rollNo;
}

ostream& operator<<(ostream& out, const Student& s) {
    out << static_cast<const Person&>(s) << ", Roll No: " << s.rollNo;
    return out;
}
    