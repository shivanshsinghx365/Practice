//find largest element in array
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
    int big=arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>big){
            big=arr[i];
        }
    }
    cout<<"Biggest element is : "<<big<<endl;
}
//input: 1 2 3 4 5 6 7
//output: 7