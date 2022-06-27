#include <iostream>
using namespace std;

int average(int arr[],int n){
    if (n==0){
        throw string("Array size is Zero");
    }
    int sum = 0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;  //int bcz sum & n were int
}

int main(){
    int arr[] = {4,5,2};
    int n = 0;
    try{
        int res = average(arr,n);
        cout<<res<<endl;
    }
    catch(string s){
        cout<<s<<endl;
    }
    cout<<"Bye... \n";
    return 0;
}