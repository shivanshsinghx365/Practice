#https://practice.geeksforgeeks.org/problems/while-loop-printtable/1

class Solution:
    def printTable(self, n):
        multiplier = 10
        while(multiplier>0):
            print(n*multiplier,end=' ')
            multiplier-=1
        print()

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        obj = Solution()
        obj.printTable(n)
# } Driver Code Ends
