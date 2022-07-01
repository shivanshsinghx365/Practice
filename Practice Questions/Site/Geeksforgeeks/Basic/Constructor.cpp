//https://practice.geeksforgeeks.org/problems/constructor/0/?track=placement100-oops-cpp&batchId=238

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

// design a class User 
// instance variable: name(String)
// Constructor: no parameter, initialize name to "Default"
class User{
    public:
    string name;
    User(){
        name="Default";
    }
};

// code here


// { Driver Code Starts.


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        User user;
        cout<<user.name<<endl;
    }
    return 0;
}
  // } Driver Code Ends
