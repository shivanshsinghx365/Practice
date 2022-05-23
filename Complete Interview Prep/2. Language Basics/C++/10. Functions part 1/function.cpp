#include <iostream>
using namespace std;
int add(int a,int b){ //function add with return type int and takes 2 integer inputs
    return a+b;
}
int thirty(){ //function with no input but fixed output
    return 30;
}
void hello(){ //this function returns nothing
    cout<<"hello\n";
}
int main(){
    int x,y;
    cout<<"Enter 2 numbers : ";
    cin>>x>>y;
    cout<<"Sum = "<<add(x,y)<<endl;
    cout<<"Thirty = "<<thirty()<<endl;
    hello();
}