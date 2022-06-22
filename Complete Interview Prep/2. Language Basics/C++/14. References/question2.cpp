#include <iostream>
using namespace std;
int &fun(){  //Note here the reference is to the returned value x and not to the function
    static int x = 10;
    return x;
}
int main(){
    int &z = fun();
    cout<<fun()<<" ";
    z=30;
    cout<<fun()<<endl;
    return 0;
}

//OUTPUT
//10 30