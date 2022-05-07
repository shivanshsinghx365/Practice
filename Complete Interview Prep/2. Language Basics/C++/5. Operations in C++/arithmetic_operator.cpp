//An operator that performs arithmetic operations on groups and numbers is arithmetic operator
#include <iostream>
using namespace std;
int main(){
    int x=10,y=20;
    cout<<x+y<<" ";//30 //Binary operator
    cout<<x*y<<" ";//200
    cout<<x%y<<" ";//10
    int z=x++;//Unary Operator Postfix
    //it assigns old value to z and then increments original x
    //effect:
    //z=x //z=10
    //x=x+1 //x=10+1=11
    cout<<x<<" "<<z<<" ";//11 10, value of x has increased but not z since post increment
    z=++x;//Prefix
    //first increases x then assigns
    //x=x+1 //x=11+1=12
    //z=x   //z=x=12
    cout<<x<<" "<<z<<" ";//12 12
    cout<<endl;
    //NOTE : do not perform multiple pre/post increments on same variable in same statement 
    //the results might be unexpected due to dependency on compiler since compiler decides how to deal
    // z=x++ + ++x; //Undefined behaviour, it depends on compiler
    //z=x++/x++
    //z=x++ * ++x. 
    return 0;
}