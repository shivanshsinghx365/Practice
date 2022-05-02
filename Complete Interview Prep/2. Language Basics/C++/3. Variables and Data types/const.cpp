#include <iostream>
using namespace std;
int main(){
    const int x = 100; // values of constant type can't be modified and stays constant
    //can be used for making constats like π pi in a program, since it can't be modified
    //therefore it is consistent, you can use macros also
    //but macros are just search and replace where ever it sees pi
    //issue with macros is that it won't do type-checking and can replace some other thing instead
    //so const is recommended for making constants instead of macros
    //x=x+1; 
    //will therefore give compiler error, since it tries to modify a constant value
    cout<<x<<endl;
    return 0;
}