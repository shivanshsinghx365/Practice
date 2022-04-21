//Exceptional handling deals with RUN-TIME EXCEPTIONS
//try : tries the code and checks for errors
//except : this code executes if no error occurred
//throw : throws an exception
#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter numerator : ";
    cin>>n;
    cout<<"Enter denominator : ";
    cin>>d;
    try{
        if (d==0){
            cout<<"ZERO"<<endl;
            throw d;
            cout<<"not executed\n";
        }
        else{
            cout<<"Result : "<<n/d<<endl;
        } 
    }
    catch(int d){
        cout<<"Division by "<<d<<" Error"<<endl;
    }
}