#include <iostream>
using namespace std;
int fun(int x,int y=0,int z){ //to make it correct write in brackets (int x,int z,int y=0)
    return (x+y+z);
}
int main(){
    cout<<fun(10,20,30);
}

//Output: Compiler Error
//NOTE : default arguments can only be placed for the last elements, any argument that does not have a default value must come first, before any parameter with default values