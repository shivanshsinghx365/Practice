/*
WAP to create a class of shape & overload area of function for various shapes
*/
#include <iostream>
using namespace std;
class shape{
    public:
        void area(int a,int b){
            cout<<"Area of rectangle is : "<<a*b<<endl;
        }
        void area(int a,int b,int c){
            cout<<"Area of triangle is : "<<0.5*b*c<<endl;
        }
        void area(int a){
            cout<<"Area of circle is : "<<3.14*a*a<<endl;
        }
};
int main(){
    shape s;
    //two parameters given so treated as rectangle
    s.area(4,3); //rectangle length and breadth
    //area rectangle = length*breadth

    //three parameters given so treated as triangle
    s.area(2,3,4); //triangle with 3rd side, base, height
    //area of triangle = 0.5*base*height

    //one parameter given so treated as circle
    s.area(2); //circle
    //area of circle = 3.14*radius*radius


    return 0;
}