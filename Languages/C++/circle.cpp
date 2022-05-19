/*
Write a C++ program to find the area of circle using class circle which have following details:
a. Accept radius from the user
b. Calculate the area
c. Display the result
*/
#include <iostream>
#include <math.h>
using namespace std;
class circle{
    public:
    int r;
    float a;
    float pi=M_PI;
    void radius(){
        cout<<"Enter Radius : ";
        cin>>r;
    }
    void area(){
        a=pi*r*r;
        cout<<"Area = "<<a<<endl;
    }
};
int main(){
    circle one;
    one.radius();
    one.area();
}