//https://practice.geeksforgeeks.org/problems/c-exception-handling3103/1
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxValue(int A, int B){
        // code here
    int ad = A+B;
    int sb = A-B;
    int ml = A*B;
    int big = (ad>sb)?(ad>ml?ad:ml):(sb>ml?sb:ml);
    int c;
    try{
        if (B==0){
            throw 1;
        }
        c=A/B;
    }
    catch(int a){
        return -999999;
    }
    int biggest = ((big>c)?big:c) ;
    return biggest;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B;
        cin>>A>>B;
        
        Solution ob;
        int ans = ob.maxValue(A,B);
        if(ans == -999999)
            cout<<"inf\n";
        else
            cout<<ans<<"\n";
    }
    return 0;
}  // } Driver Code Ends
