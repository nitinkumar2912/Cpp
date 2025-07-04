#include <iostream>
#include <concepts>

template <typename T>
requires std::integral<T> 
T sum(T a , T b){
   auto result = a+b;
   std::cout<<"The sum is = "<<result<<std::endl;
}   


int main(){
int a{15.6};
int b{20.5};
sum(a,b);
// double c{15.6};here if i will use double i am gonna get compiler error bcz i have seted the concept of integral which will only allow integer
// double d{20.5};
// sum(c,d);

}

// to get more concepts https://en.cppreference.com/w/cpp/language/constraints.html