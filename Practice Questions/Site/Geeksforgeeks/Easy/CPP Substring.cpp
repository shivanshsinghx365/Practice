//https://practice.geeksforgeeks.org/problems/cpp-substring/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string substring(string S, int L, int R) {
        // code here
        int n=R-L;
        return S.substr(L,n+1);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int L, R;
        cin >> L >> R;
        Solution ob;
        cout << ob.substring(S, L, R) << endl;
    }
    return 0;
}
  // } Driver Code Ends
