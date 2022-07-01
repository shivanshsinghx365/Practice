//https://practice.geeksforgeeks.org/problems/for-loop-2/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void utility(string s){
    // length of string is given by s.length()
    // character at any index i is given by s[i]
    for(int i=0;i<=s.length();i+=2){
        cout<<s[i];
    }
    //Write your code here
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    string s; cin>>s; 
        utility(s);
        cout<<endl;
	}
}  // } Driver Code Ends
