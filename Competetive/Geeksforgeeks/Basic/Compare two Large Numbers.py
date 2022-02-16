#https://practice.geeksforgeeks.org/problems/compare-two-large-numbers3413/1
#User function Template for python3

class Solution:

    def check(self, a,b):
        if a<b:
            return 1
        elif b<a:
            return 2
        else:
            return 3
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        a= int(input())
        b = int(input())

        solObj = Solution()

        print(solObj.check(a,b))
# } Driver Code Ends
