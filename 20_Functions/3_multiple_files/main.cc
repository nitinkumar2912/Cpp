#include <iostream>
#include "declaration.h" // here we use another file for declaration and insert that file here 

int main(){
int num1;
int num2;
std::cout<<"Enter the 1st number = ";
std::cin>>num1;
std::cout<<"Enter the 2nd number = ";
std::cin>>num2;
int result = max(num1,num2);
std::cout<<"max = "<<result<<std::endl;
int result1 = min(num1,num2);
std::cout<<"min = "<<result1<<std::endl;

}


//Functions Across Multiple Files - Compilation Model Revisited 
//ye topic h agar compile nahi karpaye to video dubara dekhlena 15:15:30 time stamp

//or 
// we have to manually coompile all files together to do that type g++ main.cc defination.cc (both cpp files) and run then a new exe file will be create in the same folder then run that file manually 
