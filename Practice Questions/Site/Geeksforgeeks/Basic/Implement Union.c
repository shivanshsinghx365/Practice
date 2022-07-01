//https://practice.geeksforgeeks.org/problems/36f2051440cda13b16444dded5ebfa6fdb930137/0/?track=cip-struct-union&batchId=238#

// { Driver Code Starts
//Initial Template for C

 // } Driver Code Ends
//User function Template for C

/*create binary tree struct node*/
// your code here
union dt{
    double* lptr;
    double* rptr;
};
struct NODE{
    double data;
    union dt d;
};

// { Driver Code Starts.
#include <stdio.h>
int main() {
	//code
	
	struct NODE ll;
	printf("%d", 1);
	return 0;
}  // } Driver Code Ends
