//https://practice.geeksforgeeks.org/problems/db4b6dd5adab4810359001fffaf0fdc2587cf060/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

double compute(int a, int b){
    
    //complete the code
    double ans =  (double)a/b ;
    
    return ans;
    

}

// { Driver Code Starts.
 
int main()
{
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b;
        cin >> a >> b ;
    
        cout << compute(a, b) << endl;
    }
    
    return 0;
}   // } Driver Code Ends
