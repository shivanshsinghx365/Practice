//https://practice.geeksforgeeks.org/problems/add-two-numbers/0/?track=cip-advanced&batchId=238

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 



int main() 
{ 
    int t; cin>>t;
    
    while(t--){
        int x;int y;
        cin>>x>>y;
        
        
 // } Driver Code Ends
//User function Template for C++

//complete auto add 
auto add = [](int x, int y){
    return x+y;
};


// { Driver Code Starts.
        
        cout<<add(x,y)<<endl;
    }
  
}   // } Driver Code Ends
