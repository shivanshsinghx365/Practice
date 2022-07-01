//https://practice.geeksforgeeks.org/problems/315289330d2c89ab5d2430c9f2434a8b9ae13ab0/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


template <typename T>

 // } Driver Code Ends



 // Refer Template in C++ track for more details 
 // on template
 int sizeOfValue(T value){
 
     // You are given a variable value
     // of unknown type.
     // find the size of the value.
     
     // complete the code
     
     int ans =  sizeof(T)   ;
     return ans;
 }

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c;
        cin>>c;
        if(c==1)
        {
            double a;
            cin>>a;
            cout<<sizeOfValue<double>(a);
            
        }
        else if(c==2)
        {
            int a;
            cin>>a;
            cout<<sizeOfValue<int>(a);
            
        }
        else
        {
            char a;
            cin>>a;
            cout<<sizeOfValue<char>(a);
    
        }
        cout<<endl;
    }
}

  // } Driver Code Ends
