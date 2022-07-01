//https://practice.geeksforgeeks.org/problems/bitwise-operators/0/?track=module-1-basics-and-control-structures&batchId=113#

// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;

// Function Prototype
void bitWiseOperation(int, int, int);


 // } Driver Code Ends
// User function Template for C++

// Function to perform bitwise manipulations
// a, b and c are input integers
void bitWiseOperation(int a, int b, int c) {
    auto d = a^a;
    cout<<d<<endl;
    auto e = c^b;
    cout<<e<<endl;
    auto f = a&b;
    cout<<f<<endl;
    auto g = c|(a^a);
    cout<<g<<endl;
    e = ~e;
    cout<<e<<endl;
    // Your code here
}

// { Driver Code Starts.

// Driver code to test above function
int main() {

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        bitWiseOperation(a, b, c);
    }

    return 0;
}  // } Driver Code Ends
