//https://practice.geeksforgeeks.org/problems/inverted-right-angletriangle-1605691171/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void invTriangleWall(int s){
    for(int i = s;i>0;i--){
        for(int j = i;j>0;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
    //Write your code here
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int s; cin>>s;
        invTriangleWall(s);
	}
}  // } Driver Code Ends
