//https://practice.geeksforgeeks.org/problems/count-digits-1606889545/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void countDigits(int n){
    int i=n;
    int cnt=0;
    while(i>0){
        i=i/10;
        cnt++;
    }

    cout<<cnt;
    //write your code here
    //print number of digits in n

}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        countDigits(n);
        cout<<endl;
	}
}  // } Driver Code Ends
