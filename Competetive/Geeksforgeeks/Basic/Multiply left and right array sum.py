#https://practice.geeksforgeeks.org/problems/multiply-left-and-right-array-sum1555/1
#User function Template for python3

def multiply (arr, n) :
    k=len(arr)//2
    s1=0
    s2=0
    for i in range(0,k):
        s1+=arr[i]
    for i in range(k,len(arr)):
        s2+=arr[i]
    return s1*s2
    #Complete the function


#{ 
#  Driver Code Starts
#Initial Template for Python 3

    

for _ in range(0,int(input())):
    n = int(input())
    arr = list(map(int, input().strip().split()))
    ans = multiply(arr, n)
    print(ans)
# } Driver Code Ends
