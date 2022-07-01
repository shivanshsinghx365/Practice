//https://practice.geeksforgeeks.org/problems/maximum-in-struct-array/0/?track=cip-struct-union&batchId=238#

// { Driver Code Starts
//Initial Template for C

#include <limits.h>
#include <stdio.h>

struct Height {
	int feet;
	int inches;
};


 // } Driver Code Ends
//User function Template for C

/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(struct Height arr[], int n)
{
    // Code here
    int mx=0;
    for(int i=0;i<n;i++){
        int sm=0;
        sm+=(arr[i].feet*12);
        sm+=(arr[i].inches);
        if(sm>mx){
            mx=sm;
        }
    }
    return mx;
}

// { Driver Code Starts.

// driver program
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int n, tmp1, tmp2;
	    scanf("%d", &n);
	    struct Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        scanf("%d %d", &tmp1, &tmp2);
	        arr[i].feet = tmp1;
	        arr[i].inches = tmp2;
	    }
	    int res = findMax(arr, n);
	    printf("%d\n", res);
	}
	return 0;
}  // } Driver Code Ends
