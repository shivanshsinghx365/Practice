//Runtime Error 
//occurs when everthing is compiled fine, but when actually run
//it gives error since it could not continue due to some unexpected error
#include <iostream>
using namespace std;
int main(){
    int x=10,y=0,z;
    z=x/y; 
    //Floating point exception (core dumped)
    return 0;
}