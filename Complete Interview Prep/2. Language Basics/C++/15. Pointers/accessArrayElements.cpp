#include <iostream>
using namespace std;
int main(){
    int arr[] = {20,30,40,50};
    int *ptr =arr; //same as
    //int *ptr;
    //ptr=arr;
    cout<<*(ptr+2)<<endl;  // so this prints 3rd element
    //When you do increment in pointers
    //ptr+1 = the next contigious memory, so this depends on the type of data stored
    // char ptr+1 increases by 1 bytes
    // int ptr increases by 2 or 4 bytes
}

/*
OUTPUT:
40
*/