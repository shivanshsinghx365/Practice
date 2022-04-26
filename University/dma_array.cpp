#include <iostream>
using namespace std;
int main(){
    int *ptr;
    int i,n;
    cout<<"Enter length = ";
    cin>>n;
    ptr=new int[n];
    for (i=0;i<n;i++){
        cout<<"Enter : ";
        cin>>ptr[i];
    }
    for (i=0;i<n;i++){
        cout<<ptr[i]<<" ";
    }
    cout<<"\n";
    delete[] ptr;
    cout<<"Memory Deallocated"<<endl;
}