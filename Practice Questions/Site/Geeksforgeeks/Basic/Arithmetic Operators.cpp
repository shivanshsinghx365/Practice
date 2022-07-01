//https://practice.geeksforgeeks.org/problems/arithmetic-operators-1605594922/0/?track=cip-intro-var-operators&batchId=238#

// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

void utility(int x, int y){
     //Perform addition x+y below
    int p = x+y;
    //Perform subtraction x-y below
    int q = x-y;
    //Perform multiplication x*y below
    int r = x*y;
    //Perform division x/y below
    int s = x/y;
    //Perform modulo operation x%y below
    int t = x%y;

    //The below code prints the output. Don't change it!
    printf("%d %d %d %d %d\n", p, q, r, s, t);
}

// { Driver Code Starts.
    
int main() {
	
	int t; scanf("%d", &t);
	
	while(t--){
	    int x, y;
	    scanf("%d %d", &x, &y);
	    utility(x, y);
	}
}  // } Driver Code Ends
