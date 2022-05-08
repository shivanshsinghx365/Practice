//Logical Operators
//Operate on multiple boolean expressions to combine the result into a single boolean value

#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    bool res = (x>0 && x<100);//1 AND 1 = 1
    cout<<res<<endl;
    res=(x>0||x>y);//1 OR 0 = 1
    cout<<res<<endl;
    res=!res;//NOT 1 = 0
    cout<<res<<endl;
    return 0;
}