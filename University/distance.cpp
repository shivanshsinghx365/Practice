/*
Create two classes dist1(meters, centimeters) and dist2(feet, inches).
Accept two distances from the user, one in meter and centimeter and other in feet and inches.
Find the sum and differences of the two distances. Display the result in, meters and centimeters 
as well as feet and inches (using friend function). (1 inch = 2.54 cm and 1 feet = 0.30 m)
*/
#include <iostream>
using namespace std;

class dist1{
    public:
    int meter;
    int cm;
    int ent(){
        cout<<"Enter meters : ";
        cin>>meter;
        cout<<"Enter cms : ";
        cin>>cm;
        return (meter*100)+cm;
    }
};
class dist2{
    public:
    int feet;
    int inch;
    int ent(){
        cout<<"Enter feet : ";
        cin>>feet;
        cout<<"Enter inches : ";
        cin>>inch;
        return (12*feet)+inch;
    }
};
int main(){
    dist1 one;
    int cms=one.ent();
    dist2 two;
    int inches=two.ent();
    double inchcm=inches*2.54;
    double sumy=inchcm+cms;
    double dify=cms-inchcm;
    cout<<"Sum in cms = "<<sumy<<endl;
    cout<<"Diff in cms = "<<dify<<endl;
    cout<<"Sum in M = "<<sumy/100<<endl;
    cout<<"Diff in M = "<<dify/100<<endl;
    cout<<"Sum in feet = "<<sumy/30.48<<endl;
    cout<<"Diff in feet = "<<dify/30.48<<endl;
    cout<<"Sum in inch = "<<sumy/2.54<<endl;
    cout<<"Diff in inch = "<<dify/2.54<<endl;
}