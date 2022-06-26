#include <iostream>
using namespace std;

int main(){
    static int a;
    int b,c; // auto variables

    int *ptr = new int[5]; // since the bracket has 5 in it, it creates an array of 5 elements
    int *p = new int; //this creates just one int
    // NOTE : ptr is just a auto variable that is stored in stack and it holds address of our array created using DMA
    // the actual array created using DMA is stored in heap
    *(ptr+2) = 71;
    cout<<*(ptr+2)<<endl;  // access index 2 of the array

    delete [] ptr; // square brackets are required to delete dma arrays
    delete p;  // square brackets are not required to delete normal, single value data
    // when we delete memory it becomes free to use
    ptr=NULL;
    // but it is not a good idea to access a deallocated memory
    //there we set ptr to NULL
    //this prevents pointer from having a garbage value after deallocation
    //if we want to check if a pointer is pointing to a valid location or not we put null and then we check for null

    return 0;
}