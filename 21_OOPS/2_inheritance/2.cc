#include <iostream>
#include <string>
using namespace std;
//here 1 class will inherit from two different class

class Person{
protected:
string name;
string address;

};

class student{
protected:
int age;
int rollno;

};

class course : public Person , public student{
protected:
string branch;

public:
course(string name, string address, int age, int rollno, string branch){
this->name=name;
this->address=address;
this->age=age;
this->rollno=rollno;
this->branch=branch;

}
void bio_data(){
    cout<<"The name of the student is "<<name<<endl;
    cout<<"The address of the student is "<<address<<endl;
    cout<<"The age of the student is "<<age<<endl;
    cout<<"The rollno of the student is "<<rollno<<endl;
    cout<<"The branch of the student is "<<branch<<endl;
}

};


int main (){
course c1("Whuok" , "Rohtak" , 19 , 25 , "cse");
c1.bio_data();
}   