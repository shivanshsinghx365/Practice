#include <iostream>
using namespace std;

int main(){

    int arr[6]={10,20};
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl; //if you partially initialize an array then we get 0 values, like here

    int ar[5];     //however, in C++ if array element is completely uninitialized then it gets random values, like here
    cout<<ar[1]<<" "<<ar[3]<<endl;
    int c;
    cout<<c<<endl; //int also gets default random value
    char k;
    cout<<k<<endl; //char again gets random

    static int u;
    cout<<u<<endl; //this gets 0, since static defaults to zero
    
    return 0;
}
/*
Output:
10 20 0
0 21988
21988
�
0
*/