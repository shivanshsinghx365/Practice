//Structures can act just like classes and can have functions, constructors and destructors

#include <iostream>
using namespace std;

struct point{
    int x;
    int y;

    point(int a,int b){ x=a; y=b; }   // A constructor to initialize x & y to a & b respectively
    //constructor because it has same name as structure and no return type

    void print(){                     // A function
        cout<< x << "  " << y << endl;
    }
};

int main(){
    point p(10,20);   //We are able to do this because of the constructor
    p.print();        //We are able to do this because of the function
    return 0;
}

/*
OUTPUT
10 20
*/