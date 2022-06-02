#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,5,8,3};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<arr<<endl; //This gives address of the first element of the array
}

/*
OUTPUT:
10 20 5 8 3 
0x7ffecee84540
*/