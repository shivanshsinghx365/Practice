//https://practice.geeksforgeeks.org/problems/bitwise-right-shift/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void utility(int a, int b){

    //just complete below statement
    int ans = a>>b;

    //print the result
    printf("%d\n", ans);
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	while(t--){
	    int a, b;
	    scanf("%d %d", &a, &b);
	    utility(a, b);
	}
	
}  // } Driver Code Ends
