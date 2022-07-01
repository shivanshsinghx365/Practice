//https://practice.geeksforgeeks.org/problems/switch-statement/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(int n){
    //write your code here
    switch(n){
        case 1:
            cout<<"One"<<endl;
            break;
        default:
            cout<<"Not One"<<endl;
            break;
    }

}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	while(t--){
	    int number; cin>>number;
        utility(number);
	}
	
}  // } Driver Code Ends
