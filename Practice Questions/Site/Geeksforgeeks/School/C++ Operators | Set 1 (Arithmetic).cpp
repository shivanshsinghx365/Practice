//https://practice.geeksforgeeks.org/problems/c-operators4602/1/?page=1&category[]=CPP&category[]=cpp-strings&category[]=cpp-operator&category[]=%20CPP-Control-Flow&category[]=cpp-pointers&sortBy=accuracy#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        vector<int> v;
        v.push_back(A+B);
        v.push_back(A*B);
        if(B>A){
            v.push_back(B-A);
            v.push_back(B/A);
        }
        else{
            v.push_back(A-B);
            v.push_back(A/B);
        }
        return v;
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}  // } Driver Code Ends
