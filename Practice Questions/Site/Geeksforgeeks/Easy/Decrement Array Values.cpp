//https://practice.geeksforgeeks.org/problems/decrement-array-values/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

int * decrementArrayElements(int numbers[], int size){
    for(int i=0;i<size;i++){
        numbers[i]=numbers[i]-1;
    }
    return numbers;
    //write your code here
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
        int numbers[n];
        for(int i = 0; i < n; i++){
            cin>>numbers[i];
        }
        int *res;
        res = decrementArrayElements(numbers, n);
        for(int i = 0; i < n; i++){
            cout << *(res + i) << " ";
        }
        cout<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
