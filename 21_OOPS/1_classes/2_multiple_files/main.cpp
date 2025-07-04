#include <iostream>
#include "Find_maximum_declaration.h"


int main (){
Find_maximum f1(15,6);
Find_maximum f2(20,20);
std::cout<<f1.get_a()<<std::endl;
std::cout<<f1.get_b()<<std::endl;
f1.print_max();
f2.print_max();
f1.set_a(33);
f1.set_b(55);
f1.print_max();
std::cout<<f1.get_a()<<std::endl;
std::cout<<f1.get_b()<<std::endl;
}