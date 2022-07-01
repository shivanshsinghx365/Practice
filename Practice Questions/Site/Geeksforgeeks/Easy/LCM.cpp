//https://practice.geeksforgeeks.org/problems/lcm/0/?track=cip-flow-function-loop&batchId=238#

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

int LCM(int a, int b){
    //write your code here
    //return LCM of a and b
    int hcf = 1;
    int small = (a<b)?a:b;
    for(int i=1;i<=small;i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    
    return (a*b)/hcf;
    
    
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int a, b; scanf("%d %d", &a, &b);
        printf("%d\n", LCM(a, b));
	}
}  // } Driver Code Ends
