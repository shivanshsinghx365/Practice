#include <iostream>
using namespace std;

struct Base{
    int x;
};

struct Derived: Base{}; //by default it inherits publicly

int main(){
    Derived d;
    d.x=20;
    cout<<d.x<<endl;  //x is accessible since its publicly inherited
    return 0;
}

/*
OUTPUT:
20
*/