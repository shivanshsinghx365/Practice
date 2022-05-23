//WAP to take age of the user and tell wether they are adult or not
#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if (age>=18)
    cout<<"Adult"<<endl; //if not using braces then ouput must be in single line only
    else
    cout<<"Not Adult"<<endl;
    return 0;
}