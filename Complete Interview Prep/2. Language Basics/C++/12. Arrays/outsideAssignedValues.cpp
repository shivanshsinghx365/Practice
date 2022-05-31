#include <iostream>
using namespace std;
int main(){
    int arr[6]={10,20};
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]; //now in C++ if array element is uninitialized then it gets random values, like in case of 2nd index here
    //but in my case i got 0 in case of int array and nothing in case of string array
    return 0;
}
/*
Output:
10 20 0
*/