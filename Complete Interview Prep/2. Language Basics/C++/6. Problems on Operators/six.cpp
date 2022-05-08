#include <iostream>
using namespace std;
int main(){
    int a=10,b=20,c=30;
    if (c>b>a) // associativity is same in same slab/group left to right here
    //here c>b=30>20=true=1 now 1>a=a>10=false=0 so we get N
        cout<<"Y";
    else
        cout<<"N";
    return 0;
}