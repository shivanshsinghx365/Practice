//https://practice.geeksforgeeks.org/problems/greatest-of-three-numbers2520/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int greatestOfThree(int a, int b, int c) {
        return ((a>b)?(a>c?a:c):(b>c?b:c));
        // code here
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.greatestOfThree(A, B, C) << "\n";
    }
}
  // } Driver Code Ends
