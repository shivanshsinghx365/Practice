#include <iostream>
using namespace std;
int main(){
    char arr[] = {1,2,3};
    char *ptr=arr;
    cout<<sizeof(char)<<endl;   //size of char
    cout<<sizeof(arr)<<endl;   //size of array total
    cout<<sizeof(ptr)<<endl;   //size of pointer
    return 0;
}

/*
OUTPUT:
1
3
8
*/