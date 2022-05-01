#https://practice.geeksforgeeks.org/problems/check-perfect-square2503/1
#User function Template for python3

#User function Template for python3
class Solution:
    def isPerfectSquare (self, n):
        k=n**(0.5)
        if k==int(k):
            return 1
        else:
            return 0
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.isPerfectSquare(n))
# } Driver Code Ends
