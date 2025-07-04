#include <iostream>
int main(){
bool a=true;
bool b=false;
bool c=true;

std::cout<<std::boolalpha;
std::cout<<"a :  "<<a<<std::endl;
std::cout<<"b :  "<<b<<std::endl;
std::cout<<"c :  "<<c<<std::endl;

std::cout<<"Basic AND operations "<<std::endl;
std::cout<<"a&&b "<<(a&&b)<<std::endl;
std::cout<<"a&&c "<<(a&&c)<<std::endl;
std::cout<<"b&&c "<<(b&&c)<<std::endl;

std::cout<<"Basic OR operations\n "<<std::endl;
std::cout<<"a||b "<<(a||b)<<std::endl;
std::cout<<"a||c "<<(a||c)<<std::endl;
std::cout<<"b||c "<<(b||c)<<std::endl;
std::cout<<std::endl;
std::cout<<"a||b "<<!(a||b)<<std::endl;
std::cout<<"a||c "<<!(a||c)<<std::endl;
std::cout<<"b||c "<<!(b||c)<<std::endl;


}