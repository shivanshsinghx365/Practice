#include <iostream>
using namespace std;

int main(){
    int arr[2]={0,1};
    cout<<"Elements in range : "<<arr[0]<<" "<<arr[1]<<endl; //This gives expected output
    cout<<"Elements out of bound : "<<arr[2]<<" "<<arr[3]<<endl; //This does not give any compiler error
    //Out of bound gives Random values
}

/*
OUTPUT:
Elements in range : 0 1
Elements out of bound : 1741760768 2011552980
*/