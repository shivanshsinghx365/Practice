//https://practice.geeksforgeeks.org/problems/taking-input/1
// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;

 void inputData();
 

 // } Driver Code Ends
//User function Template for C++

 void inputData()
{
       int a;
       cin>>a;
       string b;
       cin>>b;
       cout<<a<<' '<<b<<endl;
      //Use cin to take input and cout a and b with a space between them. Also use an endl after output
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //function call
        inputData();
        
    }
}


  // } Driver Code Ends