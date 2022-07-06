//https://practice.geeksforgeeks.org/problems/addition-of-two-numbers0812/1/?page=1&category[]=CPP&category[]=cpp-strings&category[]=cpp-operator&category[]=%20CPP-Control-Flow&category[]=cpp-pointers&sortBy=accuracy#

// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int addition(int A, int B){
        return A+B;
        // code here 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addition(A,B) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends
