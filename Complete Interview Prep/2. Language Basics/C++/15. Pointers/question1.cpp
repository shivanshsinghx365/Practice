#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3};
    int *ptr=arr;
    cout<<sizeof(int)<<endl;   //size of integer
    cout<<sizeof(arr)<<endl;   //size of array total
    cout<<sizeof(ptr)<<endl;   //size of pointer
    return 0;
}

/*
OUTPUT:
4
12
8
*/