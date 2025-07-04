#include <iostream>
#include "Find_maximum_declaration.h"


//definations in cpp file and declaration in header file


Find_maximum::Find_maximum(int x , int y){
    a = x;
    b = y;
}

void Find_maximum::set_a(int x){
a = x;
}

void Find_maximum::set_b(int y){
    b = y;
}

int Find_maximum::get_a(){
    return a;
}
int Find_maximum::get_b(){
    return b;
}

int Find_maximum::max(){
    return (a>b) ? a:b;
}

void Find_maximum::print_max(){
    std::cout<<"The max is = "<<max()<<std::endl;
} 