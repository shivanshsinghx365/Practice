//https://practice.geeksforgeeks.org/problems/for-loop-1/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

void utility(int n);

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        utility(n);
        cout << endl;
    }

    return 0;
}// } Driver Code Ends


// User function Template for C++

void utility(int n) {
    int i=1;
    for (i;i<=10;i++) cout << i* n << " ";
}

