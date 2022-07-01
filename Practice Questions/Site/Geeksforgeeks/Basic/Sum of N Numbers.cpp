//https://practice.geeksforgeeks.org/problems/sum-of-n-number/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int nSum(int n){
    int ans = 0;
    //Write your code here to calculate and return sum of n number.
    ans = n*(n+1)/2;
    return ans;
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	while(t--) {
        int n;
        scanf("%d", &n);
        int ans = nSum(n);
        printf("%d\n", ans);
    }
	
}  // } Driver Code Ends
