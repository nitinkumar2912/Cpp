#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age);
    friend ostream& operator<<(ostream& out, const Person& p);
};

#endif