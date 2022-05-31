#include <iostream>
using namespace std;
void fun(){
    static int x = 1; //it is a static variable so the value stays even when function call ends, and therefore the previous value is used when it is called next time
    //NOTE: static int x =1; is executed only for the first time and is irrelevant after that as the static variable will static to its previous value
    //if you try to do x=3; then it will make it a normal integer and output will be 4 4 4
    //even in this case do not write int x= 3; since that will create ambiguity that you are trying to give 2 values to same variable, hence just give value and not write data type again
    x++;
    cout<<x<<" ";
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}

/*
Output:
2 3 4 
*/

// if we had x as normal int
// Output = 2 2 2