#include <iostream>
using namespace std;
void hello(int x){
    cout<<"Integer\n";
}
void hello(double x){
    cout<<"Double\n";
}
int main(){
    hello(1);
    hello(2.7);
    cout<<"A"-"B"<<endl;
}