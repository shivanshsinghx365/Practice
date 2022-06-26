#include <iostream>
using namespace std;

void releaseConn(int *ptr){ delete ptr; } //frees memory

int *createConn(){  // assigns memory
    int *ptr = new int;
    return ptr;
}

int main(){
    while(1){ //this creates an infinite loop
        int *ptr = createConn(); // this will crash the program after soe time,bcz it an infinite loop
        //we are continuing to use heap memory, after sometime it will get full and we crash
        releaseConn(ptr); //this deletes the memory allocated and prevent memory leak
    }
}