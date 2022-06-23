# https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1

# Function should return True/False or 1/0
def PalinArray(arr ,n):
    # Code here
    k=1
    for i in arr:
        s=str(i)
        if s!=s[::-1]:
            k=0
    return k

#{ 
#  Driver Code Starts
# Driver Program
if __name__=='__main__':
    t=int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        if PalinArray(arr, n):
            print(1)
        else:
            print(0)
# Contributed By: Harshit Sidhwa

# } Driver Code Ends
