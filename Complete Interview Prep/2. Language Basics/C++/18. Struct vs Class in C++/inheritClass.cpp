#include <iostream>
using namespace std;

class Base{
    public:
    int x;
};

class Derived: Base{}; //by default it inherits privately

int main(){
    Derived d;
    d.x=20;
    cout<<d.x<<endl;  //x is inaccessible since its privately inherited
    return 0;
}

/*
OUTPUT:
Compiler Error
*/