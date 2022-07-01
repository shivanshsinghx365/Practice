//https://practice.geeksforgeeks.org/problems/1dc3a6ff68b90b33383d1d91e255b7a171eab092/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
// Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

// Write the first function to
// return the volume of cube
int volume(int s){
    return s*s*s;
}
// Write the second function to
// return the volume of the rectangular box
int volume(int l, int b, int h){
    return l*b*h;
}


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int q;
        cin >> q;

        switch (q) {
            case 1:
                int edge;
                cin >> edge;
                cout << volume(edge);
                break;

            case 2:
                int length, width, height;
                cin >> length >> width >> height;
                cout << volume(length, width, height);
                break;
        }
        cout << endl;
    }

    return 0;
}  // } Driver Code Ends
