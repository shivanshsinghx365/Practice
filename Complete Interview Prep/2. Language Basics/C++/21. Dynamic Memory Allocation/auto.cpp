#include <iostream>
using namespace std;

int *fun(){
    int a =10;
    int *ptr =&a;
    //return ptr; //this returns address of a
//this might give segmentation fault because address of a is being accessed via dereferencing after end of function, when all local variables of the function are removed from memory

    //if instead we had returned a dma variable, it would have been a fine program
    int *p = new int;
    *p = 10;
    return p;
}

int main(){
    int x,y;
    cout<<*fun()<<endl;
    // this value will be there until we delete it, bcz of dma
    int *ptr = fun();
    delete ptr;
    return 0;
}