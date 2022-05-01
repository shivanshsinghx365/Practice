#https://practice.geeksforgeeks.org/problems/maximum-area2642/1
#User function Template for python3

class Solution:
    def getHypotenuse(self, N):
        # code here 
        h=N**(0.5)
        b=2*h
        return int(b)

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import math

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        print(ob.getHypotenuse(N))
# } Driver Code Ends
