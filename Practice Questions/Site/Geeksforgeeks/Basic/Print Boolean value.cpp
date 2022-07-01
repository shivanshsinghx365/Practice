//https://practice.geeksforgeeks.org/problems/c86369dd566ed0637679f33bfd506b375e85e369/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void utility(bool a) {
    if(a==1){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    // code here
}

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        bool a;
        cin >> boolalpha >> a;
        utility(a);
        cout << endl;
    }
}  // } Driver Code Ends
