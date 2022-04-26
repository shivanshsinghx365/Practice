#include <iostream>
using namespace std;
int main(){
    int a;
    int *ptr;
    int **ptr1;
    int *ptr2;
    ptr1=&ptr;
    a=20;
    ptr=&a;
    cout<<"address &a = "<<&a<<endl;
    cout<<"address *ptr = "<<*ptr<<endl;
    cout<<"dereferencing ptr = "<<ptr<<endl;
    cout<<"int a = "<<a<<endl;
    cout<<"pointer to pointer **ptr = "<<ptr1<<endl;
    cout<<"nothing in pointer value = "<<*ptr2<<endl;
}