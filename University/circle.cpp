/*
Write a C++ program to find the area of circle using class circle which have following details:
a. Accept radius from the user
b. Calculate the area
c. Display the result
*/
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int r;
    float a;
    cout<<"Enter Radius : ";
    cin>>r;
    a=M_PI*r*r;
    cout<<"Area = "<<a<<endl;
}