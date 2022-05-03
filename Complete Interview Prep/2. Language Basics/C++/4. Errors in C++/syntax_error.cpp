//Syntax Error
#include <iostream>
using namespace std;
int main(){
    int x,y;
    //NOTE: declaration should be BEFORE use not after
    x=10;
    y=20;
    z=x+y; //This gives error since z was never declared before use
    cout<<z<<endl;
    return 0;
}