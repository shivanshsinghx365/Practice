# https://practice.geeksforgeeks.org/problems/average-min-max/0/?track=python-module-5&batchId=119

#User function Template for python3

# Function to calculate average
def calc_average(arr):
    s=sum(arr)
    mx=max(arr)
    mn=min(arr)
    return (s-mx-mn)//(len(arr)-2)
    # Your code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3


# Driver Code
if __name__ == '__main__':
    # Testcase input
    testcases = int(input())
    # Looping through testcases
    while(testcases > 0):
        N = int(input())
        
        a = list(map(int,input().strip().split()))
        
        print (calc_average(a))
        
        testcases -= 1
# } Driver Code Ends
