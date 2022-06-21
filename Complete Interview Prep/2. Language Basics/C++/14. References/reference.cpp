#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int &y = x; //If you put & ampersand in declaration of a variable you create a reference variable
    //So here y is a reference to x
    //So not y & x are essentially the same thing, and if we make change to one, the other also changes
    //references refer to an existing variable whereas pointers store address of a variable
    cout<<y<<" "; //10
    x=x+5;
    cout<<y<<" "; //15
    y=y+5;
    cout<<x<<" "; //20
    return 0;
}