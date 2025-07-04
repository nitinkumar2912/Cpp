#include <iostream>
#include <string>
using namespace std;
//inhereting from each other classes
class Person{
protected:
string name{};
string address{};
int age{};

public:
Person(string name , string address , int age)//in constructor first person then student ka constructor call hoga then course ka
{
    cout<<"Constructor of person"<<endl;
    this->name=name;
    this->address=address;
    this->age=age;
}
  ~Person(){
    cout<<"Deconstructor of person"<<endl;//in deconstructor first course then student ka deconstructor call hoga then person ka
  }
};

  class student : public Person{
protected:
int rollno{};

public:

student(string name , string address , int age , int rollno):Person(name , address , age )//chaining of constructors
{
    cout<<"Constructor of student"<<endl;

    this->rollno=rollno;
}


~student(){
    cout<<"Deconstructor of student"<<endl;
}
    };

class Course : public student{
protected:
int course_duration_in_years{};
string Branch{};

public:
Course(string name , string address , int age , int rollno , int course_duration_in_years , string Branch ):student(name , address , age , rollno){
    cout<<"constructor of course"<<endl;
    this->course_duration_in_years = course_duration_in_years;
    this->Branch = Branch;
}

void print_biodata(){
    cout<<"The name of the student is "<<name<<endl;
    cout<<"The address of the student is "<<address<<endl;
    cout<<"The age of the student is "<<age<<endl;
    cout<<"The rollno of the student is "<<rollno<<endl;
    cout<<"The course duration in years of the student is "<<course_duration_in_years<<endl;
    cout<<"The branch of the student is "<<Branch<<endl;
}
~Course(){
    cout<<"Deconstructor of course"<<endl;
}
    };

int main (){
Course c1("Whuok" , "Rohtak" , 19 ,25 , 4 , "CSE");
c1.print_biodata();

}