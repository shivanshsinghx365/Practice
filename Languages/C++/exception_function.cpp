#include <iostream>
using namespace std;
int calculate(int numerator, int denominator){
    if (denominator==0){
        throw 0;
    }
    else {
        return numerator/denominator;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter 2 numbers : ";
    cin>>num1>>num2;
    try{
        int answer=calculate(num1,num2);
        cout<<"Answer = "<<answer<<endl;
    }
    catch(int exception){
        cout<<"division by "<<exception<<" encountered"<<endl;
    }
}