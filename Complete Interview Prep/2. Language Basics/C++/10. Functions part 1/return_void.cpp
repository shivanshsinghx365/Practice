//return statements can be used with void as well
//in normal statements we return a particular data type
//but in void we can just use "return;" to stop execution of the program
#include <iostream>
using namespace std;
void findGreater(int x,int y){
    if (x>y){
        cout<<x<<" is greater "<<endl;
        return; //if this is removed the if x is greater both x and y will bre printed
    }
    cout<<y<<" is greater "<<endl;
    //return; at this point is optional and doesn't change anything
}
int main(){
    findGreater(10,20);
    findGreater(20,10);
    return 0;
}