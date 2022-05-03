//Syntax Errors
#include <iostream>
using namespace std;
int main(){
    int x,y,z;
    x=10;
    y=20 //Semicolon was not provided at end of a statement hence we get error
    z=x+y; //Error comes in next line which has semicolon
    //Please note if you continue the same statement in next line it might not be a problem, example
    //z=x+
    //y;
    cout<<z<<endl;
    return 0;
}