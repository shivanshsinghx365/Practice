//https://practice.geeksforgeeks.org/problems/lambda-expression-in-c/0/?track=cip-advanced&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    int t; cin>>t;
    
    while(t--){
        int x;
        cin>>x;
        
        
 // } Driver Code Ends
//User function Template for C++

//complete auto square 
auto square = [](int x){
    return x*x;
};

// { Driver Code Starts.
        
        cout<<square(x)<<endl;
    }
  
}   // } Driver Code Ends
