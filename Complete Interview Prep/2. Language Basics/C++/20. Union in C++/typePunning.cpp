#include <iostream>
using namespace std;

union test{
    int x;
    float y;
};

int main(){
    test t;
    t.y=1.1;
    cout<<t.x<<endl;   //this gives us the decimal/int equivalent of the binary representation of 1.1 since x is int and y was float
    return 0;
}

/*
OUTPUT : 
1066192077
*/