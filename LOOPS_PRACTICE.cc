
        //    important patters = 7 , 14 , 13 , 15

#include <iostream>
using namespace std;
int main(){

int a;
cout<<"Enter the number = ";
cin>>a;
                                 // pattern 1

g
// int i=1;
// while (i<=a)
// {
//     int j = 1;
//     while(j<=a){
//         cout<<"*";
//         ++j;
//     }
//    cout<<endl;
//    ++i;
// }

                                // pattern 2 
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     while (j<=a)
//     {
//         cout<<j;
//         ++j;
//     }
//     cout<<endl;
//     ++i;



                                // pattern 3

// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     while (j<=i)
//     {
//         cout<<"*";
//         ++j;
//     }
//     cout<<endl;
//     ++i;
// }

                                //pattern 4
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     while (j<=i)
//     {
//         cout<<j;
//         ++j;
//     }
//     cout<<endl;
//     ++i;
// }                                
                                  //pattern 5
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     while (j<=i)
//     {
//         cout<<i;
//         ++j;
//     }
//     cout<<endl;
//     ++i;
// }                   

                                // pattern 6
//  int i = 1;
// int count = 1;
// while (i<=a)
// {
//     int j = 1;
//     while (j<=i)
//     {
//         cout<<count<<" ";
//         ++count;
//         ++j;
//     }
//     cout<<endl;
//     ++i;
// }                           

                              // **********pattern 7 
// int i = 1;

// while (i<=a)
// {
//     int j = 1;
//     int count = i;
//     while (j<=i)
//     {
//         cout<<count<<" ";
//         count = count + 1;
//         ++j;
//     }
//     cout<<endl;
//    ++i;
//  } 
                                                 //pattern 8
// int i = 1;
// while(i<=a){
//     int j = 1;
//     int count = i;
//     while(j<=i){
//     cout<<count<<" ";
//     count = count - 1;
//     ++j;
//     }
//     cout<<endl;
// ++i;

// }

                                                       //pattern 9
// int i = 1;
// char ch = 'A';
// while (i<=a)
// {
//     int j = 1;
//     while(j<=a){
//     cout<<ch;
//     ++j;}
// cout<<endl;
// ch++;
// ++i;
// }
                                                // ORRRR

// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A' + i -1;
//     while(j<=a){
//     cout<<ch;
//     ++j;}
// cout<<endl;
// ++i;
// }

                                            //   problem 9
                                            
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A';
//     while(j<=a){
//     cout<<ch;
//     ch++;
//     ++j;}
// cout<<endl;
// ++i;
// }
                                              //problem 10
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A' + i + j -2;
//     while(j<=a){
//     cout<<ch;
//     ch++;
//     ++j;}
// cout<<endl;
// ++i;
// }                                              
                                             //problem 11   

// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A' + i -1;
//     while(j<=i){
//     cout<<ch;
//     ++j;}
// cout<<endl;
// ++i;
// }   

                                          // pattern 12

// int i = 1;
// char ch = 'A' + i - 1;
// while (i<=a)
// {
//     int j = 1;
//     while(j<=i){
//     cout<<ch;
//     ++ch;
//     ++j;}
// cout<<endl;
// ++i;
// }                                           

                                        // pattern 13
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A' + i + j  - 2;
//     while(j<=i){
//     cout<<ch;
//     ++ch;
//     ++j;}
// cout<<endl;
// ++i;
// }                                           
                                  // pattern 14
// int i = 1;
// while (i<=a)
// {
//     int j = 1;
//     char ch = 'A' + a - i;
//     while(j<=i){
//     cout<<ch;
//     ++ch;
//     ++j;}
// cout<<endl;
// ++i;
// }                                           

                                  // pattern 15
int i = 1;
while(i<=a){
    int space = a -i;
    while(space){
        cout<<" ";
        --space;
    }
    int j = 1;
    while(j<=i){
        cout<<"*";
        ++j;
    }
cout<<endl;
++i;
}


}






    
