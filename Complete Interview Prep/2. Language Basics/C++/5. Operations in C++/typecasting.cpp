//Typecasting is changing one data type to another
#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    double z; //if it was int z everything would be 0 no matter what we did here
    z=x/y;
    cout<<z<<endl; //Output is 0 since x and y are int so output is int 0 instead of 0.5
    z=(double)x/y; //Output is 0.5 since output has been typecasted to double
    //this is a old C_style typecasting meaning it is similar to c;
    //doesn't show trailing zeros by default
    //in cases like this if one is converted to double the entire answer is converted to double
    //this kind of upward typecasting occurs automatically when dealing with operations of different data types
    //character to int, int to double etc
    cout<<z<<endl;
    //C++ way of typecasting is to use static cast
    //it checks for wether you can typecast or not and only then does typecasting
    //c style typecasting blindly does typecasting
    z=static_cast<double>(x/y); //output comes 0 since it first does calculation then typecasts
    cout<<z<<endl;
    z=static_cast<double>(x)/static_cast<double>(y); //output comes 0.5 since first everything is
    //converted to typecasted and then calculation occurs
    cout<<z<<endl;
}