#include <iostream>// here const means that i am declarring and all of this is only for reading not for chaning read 
int main (){
 const char *p= nullptr;
 const char *a = "Hello world";
p = a;
std::cout<<p<<std::endl;
std::cout<<*p<<std::endl;

}