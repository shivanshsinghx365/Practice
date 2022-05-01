#https://practice.geeksforgeeks.org/problems/sum-of-product-of-x-and-y-with-floornx-y3711/1
#User function Template for python3

class Solution:
    def sumofproduct(self, n):
        # Code here
        z=0
        for x in range(1,n+1):
            y = int (n/x)
            z+=(x*y)
        return z
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        ob = Solution()
        ans = ob.sumofproduct(n)
        print(ans)
# } Driver Code Ends
