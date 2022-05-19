//Given an array of positive integers. All numbers occur an 
//even number of times except one number which occurs an odd number of times.
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
    int temp;
    for (int i=0;i<n;i++){
        temp=0;
        for (int j=0;j<n;j++){
            if (arr[j]==arr[i]){
                temp+=1;
            }
        }
        if (temp%2!=0){
            cout<<"Odd number is : "<<arr[i]<<endl;
            break;
        }
    }
}
//input : 1 2 3 2 3 1 3
//output: 3
//input : 5 7 2 7 5 2 5
//output: 5
