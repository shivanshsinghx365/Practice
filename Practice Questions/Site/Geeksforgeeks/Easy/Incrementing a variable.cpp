//https://practice.geeksforgeeks.org/problems/incrementing-a-variable/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//You need to increment the value stored in the variable by 10 

/* write the function below */
void updateVar(int &b){
    b+=10;
}
// write your code here


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {   int a;
        cin>>a;
        updateVar(a);
        cout<<a<<"\n";
    }
    return 0;
}  // } Driver Code Ends
