//https://practice.geeksforgeeks.org/problems/predict-the-column/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        int ar[arr[0].size()];
        for(int i=0;i<arr[0].size();i++){
            ar[i]=0;
            for(int j =0;j<arr.size();j++){
                if(arr[j][i]==0){
                    ar[i]+=1;
                }
            }
        }
        int mx=0;
        int nx=0;
        for(int i=0;i<arr[0].size();i++){
            if(ar[i]>nx){
                nx=ar[i];
                mx=i;
            }
        }
        return mx;
        // Your code here
        
        
    }
};

// { Driver Code Starts.
int main() {
	
	int testcase;
	
	cin >> testcase;
	
	while(testcase--){
	    int N;
	    cin >> N;
	    vector<vector<int>>arr(N,vector<int>(N));
	    // Taking elements input into the matrix
	    for(int i = 0;i<N;i++){
	        for(int j = 0;j<N;j++){
	            int x;
	            cin >> x; 
	            arr[i][j]=x;
	        }
	    }
	    Solution ob;
	    cout << ob.columnWithMaxZeros(arr,N) << endl;
	}
	
	return 0;
}  // } Driver Code Ends
