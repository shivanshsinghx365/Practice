#include <iostream>
using namespace std;
int main(){
    int *ptr;
    ptr= new int;
    cout<<"Enter a number : ";
    cin>>*ptr;
    cout<<"Answer = "<<*ptr<<endl;
    delete ptr;
    try{
        if (*ptr!=0){
            cout<<"pointer value is "<<*ptr<<endl;
        }
        else{
            throw 7;
        }
    }
    catch(int i){
        cout<<"Memory Deallocated"<<endl;
    }
    
}