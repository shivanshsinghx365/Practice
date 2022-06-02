#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40};

    cout<<"Size of int here = "<<sizeof(int)<<endl; //here each int is of 4 bytes
    cout<<"Size of array with 4 int = 4 * "<<sizeof(int)<<" = "<<sizeof(arr)<<endl; 
    //therefore an array with 4 integer elements is of 4*4 = 16 bytes in total
    //Size of array gives us the total number of bytes required to store that array on that machine

    return 0;
}

/*
OUTPUT:
Size of int here = 4
Size of array with 4 int = 4 * 4 = 16
*/