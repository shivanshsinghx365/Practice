//https://practice.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1/?page=2&category[]=CPP&category[]=cpp-strings&category[]=cpp-operator&category[]=%20CPP-Control-Flow&category[]=cpp-pointers&sortBy=accuracy#

// { Driver Code Starts
#include <iostream>
using namespace std;

 // } Driver Code Ends

class Solution{
    public:
    int findElementAtIndex(int a[], int n, int key) 
    {
        return a[key];
        // Your code goes here
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.findElementAtIndex(a, n, key) << endl;
    }

    return 0;
}  // } Driver Code Ends
