#include <iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    cout<<"Number of elements = (total size of the array) / (size of individual elements)\n";
    cout<<"Number of elements = "<<sizeof(arr)/sizeof(arr[0])<<endl;
    return 0;
}
/*
OUTPUT:
Number of elements = (total size of the array) / (size of individual elements)
Number of elements = 5
*/