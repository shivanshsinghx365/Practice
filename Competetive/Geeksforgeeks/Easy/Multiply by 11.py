#https://practice.geeksforgeeks.org/problems/multiply-by-111820/1#
#User function Template for python3
class Solution:
    def multiplyby11(self, number):
        n=int(number)
        return 11*n
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        number = input().strip()
        ob = Solution()
        print(ob.multiplyby11(number))
# } Driver Code Ends
