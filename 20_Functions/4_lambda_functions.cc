#include <iostream>

int main(){

// auto sum_result = [](double a,double b) ->int{
//     auto result = a+b;
//     return result;
// };

// auto sum_result1 = [](double a,double b){
//     auto result = a+b;
//     return result;
// };

// double a{6.9};
// double b{3.7};

// auto result1 = sum_result(a,b);
// auto result2 = sum_result1(a,b);

// std::cout<<result1<<std::endl;
// std::cout<<result2<<std::endl;



               //to get immediatilly call


// auto sum_result = [](int a,int b){
//     int result = a+b;
//     std::cout<<"hello world"<<std::endl;
//     std::cout<<"The sum is = "<<result<<std::endl;
//     return result;
// }(10,15);

                //capturing 

// int c{40};

// auto capturing = [c](){

// std::cout<<"Inner value = "<<c<<std::endl;// as the inner value is same becus inside [] c value ahs already caputred its image now if we change value of c it dosnt change to change it we can go to refferencse

// };

// for (size_t i = 0; i < 5; i++)
// {
//     /* code */std::cout<<"Outer value = "<<c<<std::endl;
//     capturing();
//     ++c;
// }

                //capturing with channign inner value 
//                 int c{40};

// auto capturing = [&c](){

// std::cout<<"Inner value = "<<c<<std::endl;

// };

// for (size_t i = 0; i < 5; i++)
// {
//     /* code */std::cout<<"Outer value = "<<c<<std::endl;
//     capturing();
//     ++c;        
// }

                     /////if i want to capture everything by a single digit 


//Capture everything by value
    /*
     int c{42};
     
     auto func = [=](){
         std::cout << "Inner value : " << c << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }
     */





    //Capturing all reference  
     int c{42};
     int d{5};
     
     auto func = [&](){
         std::cout << "Inner value : " << c << std::endl;
         std::cout << "Inner value(d) : " << d << std::endl;
     };
     
     for(size_t i{} ; i < 5 ;++i){
         std::cout << "Outer value : " << c << std::endl;
         func();
         ++c;
     }


}
