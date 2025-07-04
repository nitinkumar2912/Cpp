#include <iostream>
int main(){
int a = 4;
int* p = &a;
std::cout<<"The address of a is = "<<p<<std::endl;
std::cout<<"This is the address of  = "<<*p<<std::endl;
 int b=46;
 p=&b;
 std::cout<<"New address of b is "<<p<<std::endl;
int** c = &p; // pointer to pointer it shows the address of pointer

std::cout<<"The addres of point p is = "<<c<<std::endl;
std::cout<<"The value present at address c is = "<<*c<<std::endl;

int*** d = &c; 

std::cout<<"The address of point c is = "<<d<<std::endl;




}