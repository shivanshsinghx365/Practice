#include <iostream>
using namespace std;

union test{
    int x;
    char bin[4];
};

int main(){
    test t;
    t.x=512;
    cout<<(int)t.bin[0]<<"  "<<(int)t.bin[1]<<"  "<<(int)t.bin[2]<<"  "<<(int)t.bin[3]<<"  "<<endl;  
    //this gives us individual bytes in the binary representation
    return 0;
}

/*
OUTPUT : 
0  2  0  0
*/