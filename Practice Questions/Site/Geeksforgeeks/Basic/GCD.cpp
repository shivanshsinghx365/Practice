//https://practice.geeksforgeeks.org/problems/gcd/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int gcd(int a, int b){
    int big=1;
    int small = (a<b)?a:b;
    for(int i = 1;i<=small;i++){
        if(a%i==0 && b%i==0){
            big = i;
        }
    }
    return big;
        
    //code here to calculate and return gcd of a and b

        
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int A, B; cin>>A>>B;
        int ans = gcd(A,B);
        cout<<ans<<endl;
	}
}  // } Driver Code Ends
