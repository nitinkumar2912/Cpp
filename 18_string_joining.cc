#include <iostream>
#include <cstring>
int main (){
char message1[] = "Hello" ;
char message2[] = " how are you";
std::strcat(message1 , message2);
std::cout<<message1<<std::endl;
std::strcat(message1 , " my name is whuok");
std::cout<<message1<<std::endl;
std::cout<<std::endl;
//if we want to add specific no of characters 
char message3[] = "Hello" ;
char message4[] = " how are you";
std::strncat(message3 , message4 , 5);
std::cout<<message3<<std::endl;
std::strncat(message3 , " my name is whuok" , 5);
std::cout<<message3<<std::endl;
std::cout<<std::endl;
//coppy strings 
char message5[] = "Hello" ;
char message6[] = " how are you";
char message7[] = " i dont know";
std::strcpy(message5 , message6);
std::strcpy(message6 , message7); //right side vala left side vale m copy hoajeyga
std::cout<<message5<<std::endl;
// std::strcpy(message5 , " my name is whuok"); here error will come we cant copy like this
std::cout<<message6<<std::endl;
std::cout<<message7<<std::endl;
std::cout<<std::endl;
//copy no of characters
char message8[] = "Hello" ;
char message9[] = " how are you";
char message0[] = " i dont know";
std::strncpy(message8 , message9 , 5);
std::strncpy(message9 , message0 , 5);
std::cout<<message8<<std::endl;
std::cout<<message9<<std::endl;
std::cout<<message0<<std::endl;
std::cout<<std::endl;



}