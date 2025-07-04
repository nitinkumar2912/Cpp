#include <iostream>
// without constructor and deconstructor

// class Find_maximum
// {
// private:
//     /* data */
// public:
//     int a , b;
//    int max(){
// auto result = (a>b)  ? a:b;
// std::cout<<"The max is = "<<result<<std::endl;
// return result;
//    }
// };

// int main (){
// Find_maximum f1;
// f1.a = 15;
// f1.b = 20;
// f1.max();
// }


// with constructor

class Find_maximum
{
private:
    int a ,b;
public:
Find_maximum(int x , int y){
    a = x;
    b = y;

}

void set_a(int x){
    a = x;
}
void set_b(int y){
    b = y;
}

int get_a(){
return a;
}

int get_b(){
return b;
}

int max(){
        return (a>b) ? a:b;
    }

    void print_max(){
std::cout<<"The max is "<<max()<<std::endl;
    }

};

int main (){
Find_maximum f1(15,6);
Find_maximum f2(200,6);
std::cout<<f1.get_a()<<std::endl;
std::cout<<f1.get_b()<<std::endl;
f1.print_max();
f2.print_max();
f1.set_a(33);
f1.set_b(55);
f1.print_max();
std::cout<<f1.get_a()<<std::endl;
std::cout<<f1.get_b()<<std::endl;
std::cout<<sizeof(Find_maximum)<<std::endl;
}
