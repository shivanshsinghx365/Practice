//https://practice.geeksforgeeks.org/problems/max-and-second-max/0/?track=cip-array-string-pointer-reference&batchId=238#

// { Driver Code Starts
//Initial Template for C++

// CPP code to find largest and 
// second largest element in the array

#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
     

class Solution{
  public:
    /* Function to find largest and second largest element
    *sizeOfArray : number of elements in the array
    * arr = input array
    */
    vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = 0, max2= -1;
        
        /*********************************
         * Your code here
         * This function should return a
         * vector with first element as
         * max and second element as 
         * second max
         * *******************************/
         for(int i=0;i<sizeOfArray;i++){
             if(arr[i]>max){
                 max=arr[i];
             }
         }
         
         vector<int> temp;
         
         for(int i=0;i<sizeOfArray;i++){
             if(arr[i]<max){
                 temp.push_back(arr[i]);
             }
         }
         
         for(int i=0;i<temp.size();i++){
             if(temp[i]>max2){
                 max2=temp[i];
             }
         }
         
         vector<int> final;
         final.push_back(max);
         final.push_back(max2);
         
         return final;
    }
};

// { Driver Code Starts.

// Driver Code
int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    Solution obj;
	    vector<int> ans = obj.largestAndSecondLargest(sizeOfArray, arr);
	    cout<<ans[0]<<' '<<ans[1]<<endl;
	}
	
	return 0;
}  // } Driver Code Ends
