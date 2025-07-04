#include "Person.h"

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}

ostream& operator<<(ostream& out, const Person& p) {
    out << "Name: " << p.name << ", Age: " << p.age;
    return out;
}
