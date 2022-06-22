#include <iostream>
using namespace std;
int main(){
    int *p1;
    cout<<p1<<endl;    // Random address
    cout<<*p1<<endl;   // Random value
    //We might also get some error because we might not have access to the random address choosen in the uninitialized pointer
    //Segmentation Fault can occur
    return 0;
}