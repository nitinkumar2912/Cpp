#include <iostream>
#include <string>
int main (){
std::string message = "Hello";
std::cout<<message<<std::endl;
std::string message1(message,2,3);
std::cout<<message1<<std::endl;
std::string message2 = message;
std::cout<<message2<<std::endl;
std::string message3(4,'e');
std::string message4("hello world",7);
std::cout<<message3<<std::endl;
std::cout<<message4<<std::endl;
}