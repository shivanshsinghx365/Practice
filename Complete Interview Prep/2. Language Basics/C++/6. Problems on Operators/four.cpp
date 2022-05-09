#include <iostream>
using namespace std;
int main(){
    int x=1,y=2,z=3,a;
    a=(x,y,z);
    cout<<a<<endl;
    cout<<x,y,z; //1st value gets printed as , has least precedence
    // if you did int a=x,y,z it will give error since you are trying to assign multiple values during assignment itself
    return 0;
}