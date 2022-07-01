//https://practice.geeksforgeeks.org/problems/right-angle-triangle-1605685807/0/?track=cip-flow-function-loop&batchId=238

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

void triangleWall(int s){
    for(int i=0;i<s;i++){
        for(int j=0;j<i+1;j++){
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
        triangleWall(s);
	}
}  // } Driver Code Ends
