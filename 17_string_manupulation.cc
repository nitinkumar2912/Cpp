#include <iostream>
#include <cstring>

int main(){
    //string length
// const char message1[] = "Hello my name is whuok";
// const char* message2 = "Hello  my name is nitin";

// std::cout<<"Here using strlen to find size which do not include null character \\0 of message1 = "<<std::strlen(message1)<<std::endl;
// std::cout<<"Here using strlen to find size which do not include null character \\0 of messasge2 = "<<std::strlen(message2)<<std::endl;
// std::cout<<"Here using sizeof which find size but include null character also \\0 of message1 = "<<sizeof(message1)<<std::endl;
// std::cout<<"Here using sizeof which find size but include null character also \\0 of messasge2 = "<<sizeof(message2)<<std::endl;
 
//string compare
//-ve if the first string will come infront of second +ve if the second string will come infront of first and 0 if the both strings are equal according to alphabatically order
// const char* message1 = "abcd";
// const char* message2 = "bbcd";
// std::cout<<"1. abcd"<<std::endl;
// std::cout<<"2. bbcd"<<std::endl;
// std::cout<<"Answer = "<<strcmp(message1,message2);

// const char* message3 = "bbcd";
// const char* message4 = "abcd";
// std::cout<<"1. bbcd"<<std::endl;
// std::cout<<"2. abcd"<<std::endl;
// std::cout<<"Answer = "<<strcmp(message3,message4);
 
// const char* message5 = "abcd";
// const char* message6 = "abcd";
// std::cout<<"1. abcd"<<std::endl;
// std::cout<<"2. abcd"<<std::endl;
// std::cout<<"Answer = "<<strcmp(message5,message6);

//to find a charachter in a string

const char *string = "Hello my name is wHuok Hi i dont know wHat to write";
char target = 'H';
const char *result = string;
size_t no_of_loops{};
while ((result = std::strchr(result,target)) !=nullptr)
{
    /* code */std::cout <<"Found "<<target<<" starting at "<<result<<std::endl;
++result;
++no_of_loops;
}
std::cout<<"no of loops are done : "<<no_of_loops<<std::endl;

}