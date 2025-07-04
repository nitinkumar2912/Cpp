#include <iostream>

// void enter_bar(int age) {
//       // age comes from outside
//       std::cout<<"Enter your age = ";
//       std::cin>>age;
//     if(age > 18) {
//         std::cout << "You can enter."<<std::endl;
//     } else {
//         std::cout << "You're too young." <<std::endl;
//     }
// }


// int main(){
// enter_bar(23);  // Works for age 23
// enter_bar(16);  // Works for age 16


// }

// calling max
//calling max value

int max(int a , int b){
if(a>b)

return a;

else{
    return b;
}
}

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
