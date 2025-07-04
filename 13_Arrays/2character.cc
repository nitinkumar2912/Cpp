#include <iostream>
int main(){
char message[] = {'H', 'E', 'L', 'L', 'O'};
std::cout<<"Meassage : ";
for(auto c : message)
{
std::cout<<c;


}
std::cout<<std::endl;
std::cout<<"changes message : ";
message[0] ='L'; 
for(auto c : message)
{
std::cout<<c;



}



}