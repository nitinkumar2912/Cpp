#include <iostream>
int main (){
double a;
double b;
char op;
std::cout<<"Enter Number 1 = ";
std::cin>>a;

std::cout<<"Enter Number 2 = ";
std::cin>>b;

std::cout<<"what you want to do (+,-,*,/) =  ";
std::cin>>op;

switch (op)
{
case '+':
    std::cout<<"The sum is "<<a+b<<std::endl;

    break;
    
    case '-':
    std::cout<<"The answer is "<<a-b<<std::endl;

    break;

    case '*':
    std::cout<<"The answer is "<<a*b<<std::endl;

    break;

    case '/':
    std::cout<<"The answer is "<<a/b<<std::endl;

    break;

    

default:
    break;
}

}