#https://practice.geeksforgeeks.org/problems/special-odd-series-sum1235/1
#User function Template for python3
class Solution:
    def sumOfTheSeries (self, n):
        # code here
        s=0
        k=0
        for i in range(1,n*2,2):
            k+=1
            s+=(k*k)
        return s
            

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
