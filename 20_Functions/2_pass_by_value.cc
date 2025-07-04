#include <iostream>
void find_age(int age){
++age;
std::cout<<"Hello , you are "<<age<<" years old "<<" and address of age "<<&age<<std::endl;

}

int main(){

int age{23};
std::cout<<"Before call your age is "<<age<<" and address of age "<<&age<<std::endl;

find_age(age);

std::cout<<"After call your age is "<<age<<" and address of age "<<&age<<std::endl;


}