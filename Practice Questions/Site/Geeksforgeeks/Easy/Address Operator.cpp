//https://practice.geeksforgeeks.org/problems/address-operator/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



int main() {
	int t;
	cin >> t;
	
	while(t--){
	    int a;
        cin >> a;
        int *address;
	    
	    
 // } Driver Code Ends
//User function Template for C++


// int a;
// cin >> a;
// int *address;
	
// we have to store address of 'a' below
address = &a;

// cout << *address << endl;

// { Driver Code Starts.
	    
	    cout << *address << endl;
	
	    
	}
	
	
	
	return 0;
}  // } Driver Code Ends
