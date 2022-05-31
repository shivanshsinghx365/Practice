#include <iostream>
using namespace std;
void fun(int x,int y,int z){
    cout<<x<<" "<<y<<" "<<z<<" ";
}
int main(){
    int i=2;
    fun(i++,i++,i++);
    return 0;
}

//Output of this program is compiler dependent, because C++ standard does not say about parameter evaluation, which might be from left to right or right to left
//in this case output is 5 5 5 because values were first incremented everywhere, then assigned to the function to print
//if it was post increment we got 4 3 2,since value were incremented from left to right

/*
Output:
5 5 5
i got this same output in every online/linux compiler i tried, however it could have also been 3 4 5 or 5 4 3, obviously based on compiler
on the basis or the order in which it treats the arguments
*/


//NOTE : When you pass function parameters they are always evaluated first before they are assigned to the parameters that are received by the function


//