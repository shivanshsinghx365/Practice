//https://practice.geeksforgeeks.org/problems/print-square/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void square(int n){
    // code here
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1){
                cout<<"* ";
            }
            else if(j==n-1){
                cout<<"*";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}


// { Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        square(n);
    }
    return 0;
}  // } Driver Code Ends
