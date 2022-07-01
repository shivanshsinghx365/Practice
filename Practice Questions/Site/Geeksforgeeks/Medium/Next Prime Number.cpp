//https://practice.geeksforgeeks.org/problems/next-prime-number/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int nextPrime(int n){
    //code here to find next prime number
    //return next prime number
    
    int i=0;
    for(int i=n+1;i<501;i++){
        int k=0;
        for (int j=2;j<i;j++){
            if (i%j==0){
                k+=1;
            }
        }
        if(k==0){
            return i;
        }
    }
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int ans = nextPrime(n);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends
