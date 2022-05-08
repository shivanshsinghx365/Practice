#include <iostream>
using namespace std;
int main(){
    int x=10,y; //x assigned value 10
    y=x;//y assigned value of x=10
    y=x=20; //interpretted as y=(x=20) since assignment has right to left associativity
    cout<<x<<" "<<y<<endl;
    x+=10; //x=x+10=20+10=30
    cout<<x<<endl;
    return 0;
}

/*NOTE:
It's better to use brackets rather than rembering associativity and precedence rules
it also makes code more easy to understand*/