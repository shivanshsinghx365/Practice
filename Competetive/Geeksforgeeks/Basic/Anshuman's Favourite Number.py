#https://practice.geeksforgeeks.org/problems/anshumans-favourite-number2029/1
#User function Template for python3
class Solution:
    def isValid (self,N):
        if (N%5)==0:
            return "YES"
        else:
            return "NO"
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        N=int(input())
    

        ob = Solution()
        print(ob.isValid(N))
# } Driver Code Ends
