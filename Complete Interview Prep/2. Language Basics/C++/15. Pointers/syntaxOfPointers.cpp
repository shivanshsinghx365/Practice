#include <iostream>
using namespace std;
int main(){
    int x=10;
    int * ptr = &x;
    cout<<endl;

    cout<<"x     = "<<x<<endl;     // Value of x
    cout<<"*ptr  = "<<*ptr<<endl<<endl;  // Dereferencing a pointer gives value stored at that address

    cout<<"&x    = "<<&x<<endl;    // gives address of x
    cout<<"ptr   = "<<ptr<<endl;   // gives address of x stored in pointer
    cout<<"&*ptr = "<<&*ptr<<endl<<endl; // gives address of x since *ptr is dereferencing to x

    cout<<"&ptr  = "<<&ptr<<endl;  // gives address of the pointer

    cout<<endl;
    return 0;
}