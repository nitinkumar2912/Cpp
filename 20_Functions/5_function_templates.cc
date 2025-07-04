#include <iostream>
#include <string>

template <typename T>
T sum(T a , T b)
{
auto result = a+b;
std::cout<<"The sum is = "<<result<<std::endl;
std::cout<<&a<<std::endl;
return result;
}
int main(){
    int a{5};
    int b{5};
    std::cout<<sum(a,b)<< &a <<std::endl;
}