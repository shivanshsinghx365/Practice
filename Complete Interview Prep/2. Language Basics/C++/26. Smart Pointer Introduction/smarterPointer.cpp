#include <iostream>
using namespace std;

class test{
    public:
    int x,y;
    test(int a=0,int b =0){
        x=a;
        y=b;
        cout<<"Constructor Called\n";
    }
    ~test(){
        cout<<"Destructor called\n";
    }
};

class SP{
    test *ptr;
    public:
    SP(test *p=NULL) {ptr=p;}
    ~SP(){delete ptr;}
    test &operator *(){return *ptr;}
    test *operator ->(){return ptr;}
};

int main(){
    cout<<"Main begins\n";
    {
        SP sp(new test(10,20));
    }
    //destructor is called and memory is de-allocated bcz it is a smart pointer
    cout<<"Main Ends\n";
    return 0;
}

/*
OUTPUT : 
Main begins
Constructor Called
Destructor called
Main Ends
*/