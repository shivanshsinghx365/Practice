//Logic itself is wrong
//works fine but doesn't give desired output, mistake is on programmer's side
#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    if (x=y){ //This statement is a non boolean expression, it should have been x==y
    //c++ allows this kind of thing, java does not
    //x is being assigned value of y, in situation like this where value is passed to conditional operator
    //instead of boolean, 0 is cosidered false and everything else is true
    //therfore program gives output "Same" even when 10 and 20 are not same
        cout<<"Same\n";
    }
    else{
        cout<<"Not Same\n";
    }
    cout<<x<<endl; //if you cout<<x; value would be 20 instead of 10 since x is reassigned value 20
    return 0;
}