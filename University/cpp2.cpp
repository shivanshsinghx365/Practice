/*
WAP to throw exception using functions
*/
#include <iostream>
using namespace std;
void divisi(int a, int b){
    try{
        if(b==0){
            throw b;
        }
        cout<<"Division is : "<<(double)a/b<<endl;
    }
    catch(int e){
        cout<<"Division by zero is not possible"<<endl;
    }
}
int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    divisi(a,b);
    return 0;
}