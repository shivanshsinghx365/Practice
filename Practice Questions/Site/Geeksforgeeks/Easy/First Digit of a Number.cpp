//https://practice.geeksforgeeks.org/problems/first-digit-of-a-number/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C


#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Complete the function
int firstDigit(int n){
    // code here
    int j=n;
    while(j>=10){
        j=j/10;
    }
    return j;
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int n; scanf("%d", &n);
            
        int answer = firstDigit(n);
        printf("%d\n", answer);
	}
}  // } Driver Code Ends
