//Exceptional handling deals with RUN-TIME EXCEPTIONS
//try : tries the code and checks for errors
//except : this code executes if no error occurred
//throw : throws an exception
#include <iostream>
using namespace std;
int main(){
    int numerator,denominator;
    cout<<"Enter numerator : ";
    cin>>numerator;
    cout<<"Enter denominator : ";
    cin>>denominator;
    try{
        if (denominator==0){
            cout<<"ZERO"<<endl;
            throw denominator;
            cout<<"Not Executed\n";
        }
        else{
            cout<<"Result : "<<numerator/denominator<<endl;
        } 
    }
    catch(int exception){
        cout<<"Division by "<<exception<<" Error"<<endl;
    }
}