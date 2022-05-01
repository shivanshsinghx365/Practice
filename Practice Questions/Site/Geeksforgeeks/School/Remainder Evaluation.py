#https://practice.geeksforgeeks.org/problems/remainder-evaluation3755/1#
#User function Template for python3

class Solution:
    def findRemainder(self, num1, num2):
        #code here 
        return num1%num2

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        num1,num2 = map(int,input().strip().split())
        ob = Solution()
        print(ob.findRemainder(num1,num2))
# } Driver Code Ends
