#include <iostream>
using namespace std;
int main(){
    int x=10;
    int*ptr=&x;

    cout<<*ptr<<endl;
    x=x+30;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;

    *ptr=*ptr+40; //here dereferencing operator * takes us from ptr to x and the value is changed in x and reflected everywhere
    cout<<x<<endl;
    return 0;
}

/*
OUTPUT
10
40
0x....something
80
*/