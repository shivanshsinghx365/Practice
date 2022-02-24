//reverse an array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements with a space : ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Reverse : ";
    for (int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//input: 1 2 3 4 5 6 7
//output: 7 6 5 4 3 2 1