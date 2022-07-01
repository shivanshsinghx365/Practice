//https://practice.geeksforgeeks.org/problems/even-odd/0/?track=module-1-basics-and-control-structures&batchId=113#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    void evenOdd(int a, int b){
        int c;
        if(a%2==0){
            cout<<a<<endl;
            c=a;
        }
        else{
            cout<<b<<endl;
            c=b;
        }
        
        
        if(c==a){
            cout<<b<<endl;
        }
        else{
            cout<<a<<endl;
        }
        
        // Code here
    }
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        Solution obj;
        obj.evenOdd(a, b);
    }
    return 0;
}  // } Driver Code Ends
