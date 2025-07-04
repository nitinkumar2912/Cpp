#include <iostream>
int main (){
int a = 3;
int *p= &a;
int *b= p;
std::cout<<*p<<std::endl;
std::cout<<*b;
}

