#https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1
#User function Template for python3

class Solution:
    def mthHalf(self, N, M):
        # code here
        for i in range(M-1):
            N=N//2
        return N

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        N, M = [int(x) for x in input().split()]
        ob = Solution()
        print(ob.mthHalf(N, M))
# } Driver Code Ends
