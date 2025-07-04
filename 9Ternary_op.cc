#include <iostream>
#include <string>
int main(){
int a;
int b;
int x;
// std::cout<<"Enter number 1 = ";
// std::cin>>a;

// std::cout<<"Enter number 2 = ";
// std::cin>>b;

// int greater_number = (a>b) ? a:b;//inme se jonsa bhi bada number hoga a or b me se greater_number ki value vo hojayegi
// std::cout<<"The greater number is "<<greater_number;


// to check even or odd
// we can use if and else by same operator and method 
// std::string  even_odd = (a % 2 == 0) ? "even" : "odd";
// std::cout<<"The number is "<<even_odd;

//to check a number is + or  -

std::cout<<"Enter number  = ";
std::cin>>x;

std::string postive_negative = (x==0) ? "zero": (x>0) ? "positive":"negative";

std::cout<<"The number is "<<postive_negative;
}

