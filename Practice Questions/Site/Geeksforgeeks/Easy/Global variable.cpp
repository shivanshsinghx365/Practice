//https://practice.geeksforgeeks.org/problems/b43c84131f1f6af6b54f470d3f925a2f5976f68e/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

//decalre global variable g below
int g=10;

// { Driver Code Starts.

// global variable accessed from 
// within a function 
int getter() 
{ 
	return g; 
} 

void setter(int x){
    g = x;
}

// main function 
int main() 
{ 
	setter(g);
	cout << getter() << endl; 
	
	return 0;
} 
  // } Driver Code Ends
