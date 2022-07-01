//https://practice.geeksforgeeks.org/problems/de776bf8c9c130169a8d66c890dbf145db364586/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

void utility() {

    // declare the variable count here
    static int count = 0;
    // increases the value of count by 1
    count++;

    // print count
    cout << count;
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;

    int n;
    cin >> n;

    while (n--) {

        utility();
        cout << " ";
    }

    return 0;
}  // } Driver Code Ends
