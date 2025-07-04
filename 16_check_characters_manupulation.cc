#include <iostream>
#include <iterator>
int main (){
// here we will check is character is of which type
// https://en.cppreference.com/w/cpp/header/cctype

// char a = 'c';
// std::cout<<" the a is alpnumeric : "<<isalnum(a)<<std::endl;
// std::cout<<" the a is alpnumeric : "<<isalnum('c')<<std::endl;
// std::cout<<" the a is alpnumeric : "<<isalnum('?')<<std::endl;
// //if i use bool to get true or false
// std::cout<<std::boolalpha;
// char a = 'c';
// std::cout<<" the a is alpnumeric : "<<(bool)isalnum(a)<<std::endl;
// std::cout<<" the a is alpnumeric : "<<(bool)isalnum('c')<<std::endl;
// std::cout<<" the a is alpnumeric : "<<(bool)isalnum('?')<<std::endl;

//find blank spaces

// char message[] = "Hello i am Nitin Kumar i am from Rohtak";
// size_t blank_count{};
// for (size_t i = 0; i < sizeof(message); i++)
// {
//     /* code */if (isblank(message[i]))
//     {
//         /* code */std::cout<<"There is a blank on index number : "<<i<<std::endl;
//         ++blank_count;
//     }
    
// }

// std::cout<<"Total blank count are "<<blank_count<<std::endl;

//for upper case or lower case

char meassage[] = "Hello my name is Nitin Kumar I am from Rohtak";
int lowercase_count{};
int uppercase_count{};
std::cout<<"Our meassage : "<<meassage<<std::endl;
for(auto Detection : meassage){
    if(std::islower(Detection))
    {
        /* code */std::cout<<" "<< Detection;
        ++lowercase_count;
    }
  if(std::isupper(Detection)){
    std::cout<<" "<< Detection;
++uppercase_count;  
}   
}
std::cout<<std::endl;
std::cout<<"So No of upper case are "<<uppercase_count<<" and the No of lower case are "<<lowercase_count<<std::endl;


}