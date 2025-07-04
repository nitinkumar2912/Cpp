#include <iostream>
int main (){
//     int a;
//     std::cout<<"No of repetation = ";
//     std::cin>>a;

// //     int result[]= {1, 2, 3, 4};

// // for (size_t i = 0; i < a; i++)
// // {
// //     /* code */std::cout<<"the arrays are "<<result<<std::endl; 
// // }

int num[] = {1, 2, 3, 4};
int sum=0;
for (size_t i = 0; i < 5; i++)
{
    /* code */sum += num[i];
}
std::cout<<"The sum of array is "<<sum<<std::endl;

}