#include <iostream>

int max(int a , int b);// declaration of function


int main(){
int num1;
int num2;
std::cout<<"Enter the 1st number = ";
std::cin>>num1;
std::cout<<"Enter the 2nd number = ";
std::cin>>num2;
int result = max(num1,num2);
std::cout<<"max = "<<result<<std::endl;

}
//defination of function matlab function ko karna kya h
int max(int a, int b){
if (a>b)
{
    /* code */return a;
}
else{
    return b;
}

}