#include <iostream>
int main (){
int *p{};
p = new int{33};
if (p==nullptr)
{
    /* code */std::cout<<"it is null";
}else{
    std::cout<<"not null its a valid address"<<std::endl;
    std::cout<<"it is the valid address of "<<*p;



}


}