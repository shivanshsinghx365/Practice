//https://practice.geeksforgeeks.org/problems/length-of-string/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution{
  public:
    int lengthString(string str)
    {
        //Your code here
        return str.length();
    }
};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    
	string s;
	cin >> s;
	Solution obj;
	cout << obj.lengthString(s) << endl;
	}
	
	return 0;
	
}

  // } Driver Code Ends
