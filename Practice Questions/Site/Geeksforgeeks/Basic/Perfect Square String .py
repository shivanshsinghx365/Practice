#https://practice.geeksforgeeks.org/problems/perfect-square-string5914/1
#User function Template for python3

class Solution:
    def isSquare(self, S):
        k=0
        for i in S:
            k+=ord(i)
        sqf=k**(0.5)
        if sqf==int(sqf):
            return 1
        else:
            return 0
        #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        S = input()
        ob = Solution()
        print(ob.isSquare(S))
# } Driver Code Ends
