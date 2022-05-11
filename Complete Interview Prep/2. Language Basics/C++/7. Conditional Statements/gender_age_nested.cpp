//WAP to take age and gender & print out of the following using nested if-else
//male kid, female kid, male adult, female adult
#include <iostream>
using namespace std;
int main(){
    char gender;
    int age;
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter Gender (f/m) : ";
    cin>>gender;
    if (age>=18){
        if (gender=='f'){
            cout<<"Adult Female";
        }
        else{
            cout<<"Adult Male";
        }
        cout<<endl;
    }
    else{
        if (gender=='f'){
            cout<<"Female Kid";
        }
        else{
            cout<<"Male Kid";
        }
        cout<<endl;
    }
}