//Program to check default values of uninitialized int variable in C++
#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<x<<endl; //here you can get any random value since the value is not initialized
    //however in other languages like java, default values exist so no ambiguity
    //but in my compiler it seems to give same default result of 0
    //and GfG compiler gives error
    //So it all depends on compiler once again
    return 0;
}