#include <iostream>

using namespace std;

class test{
    public:
    int x,y;
    test(int a=0,int b=0){
        x=a;
        y=b;
        cout<<"Constructor called\n";
    }
    ~test(){
        cout<<"Destructor called\n";
    }
};

int main(){
    cout<<"Main Begins\n";
    {
        test *p =new test(10,20);
    } //memory was never deallocated since destructor was not called, since it is a normal pointer dma and not smart pointer
    cout<<"Main ends\n";
    return 0;
}

/*
OUTPUT : 
Main Begins
Constructor called
Main ends
*/