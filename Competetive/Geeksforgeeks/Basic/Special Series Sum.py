#https://practice.geeksforgeeks.org/problems/special-series-sum0903/1
#User function Template for python3
class Solution:
    def sumOfTheSeries (self, n):
        # code here 
        s=0
        for i in range(n+1):
            s+=((i*(i+1))/2)
        return int(s)
#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n = int(input())
        
        ob = Solution()
        print(ob.sumOfTheSeries(n))
# } Driver Code Ends
