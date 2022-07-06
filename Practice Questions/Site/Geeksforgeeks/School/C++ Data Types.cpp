//https://practice.geeksforgeeks.org/problems/c-data-types1523/1/?page=1&category[]=CPP&category[]=cpp-strings&category[]=cpp-operator&category[]=%20CPP-Control-Flow&category[]=cpp-pointers&sortBy=accuracy#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        int a;
        cin>>a;
        return a;
        // code here
    }
    
    char cppCharType() {
        // code here
        char c;
        cin>>c;
        return c;
    }
    
    float cppFloatType() {
        // code here
        float f;
        cin>>f;
        return f;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}  // } Driver Code Ends
