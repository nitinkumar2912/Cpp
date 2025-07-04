#include <iostream>
int addnumbers(int firstnumberr,int secondnumberr){
    int result = firstnumberr+secondnumberr;
    return result;
}
int multiplynumbers(int firstnumberrr,int secondnumberr){
    int result=firstnumberrr*secondnumberr;
    return result;
}
int sum(int a, int b){
    int result = a+b;
    std::cout<<"Ther address of the result of the sum is = "<<&result<<std::endl;

    return result;
}
int main() {
//    int first_number = 13;
//    int second_number=7;
//    std::cout<<"First number : "<<first_number<<std::endl ;
//    std::cout<<"Second number : "<<second_number<<std::endl;
//    int sum = first_number+second_number;
//    std::cout<<"The sum is = "<<sum<<std::endl;
// sum=addnumbers(5,7);
// std::cout<<"The sum is : "<<sum<<std::endl;

// int product=multiplynumbers(500,101);
// std::cout<<"The product is : "<<product;

int a{6};
int b{10};

int result = sum(a,b);
std::cout<<"Sum = "<<result;

}
