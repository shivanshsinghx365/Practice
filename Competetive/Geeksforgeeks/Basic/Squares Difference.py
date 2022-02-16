#https://practice.geeksforgeeks.org/problems/squares-difference0939/1
#User function Template for python3
class Solution:
    def squaresDiff (self, N):
        l=N
        k=(l*(l+1)*(2*l+1))/6
        j=((l*(l+1))/2)**2
        return int(abs(k-j))
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.squaresDiff(N))
# } Driver Code Ends
