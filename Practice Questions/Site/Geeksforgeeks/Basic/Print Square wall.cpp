//https://practice.geeksforgeeks.org/problems/print-square-wall/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void squareWall(int s) {
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    // code here
}


// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--) {
        int n;
        cin >> n;
        squareWall(n);
    }

    return 0;
}  // } Driver Code Ends
