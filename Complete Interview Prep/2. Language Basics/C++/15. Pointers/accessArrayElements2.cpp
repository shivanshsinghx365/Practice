#include <iostream>
using namespace std;
void fun(int *ptr,int n){//same as writing int ptr[] because even this is pointer
//this is because arrays are always passed & even normally accessed as pointers only 
//hence its not recommended to get size of an array inside function definition
//since that will always give you size of pointer instead of size of array
    for(int i=0;i<n;i++)
        cout<<ptr[i]<<" ";  //Compiler when accessing array element use pointer arithmetic, so even
        //we can still use arr[] syntax with our pointer ptr
        //automatically this statement is converted to *(ptr+i)
}
int main(){
    int arr[] = {10,20,30,40,50};
    fun(arr,5);
    cout<<arr[2]; //even this is internally done via pointers as *(arr+2)
    return 0;
}