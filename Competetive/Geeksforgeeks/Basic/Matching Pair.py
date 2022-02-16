#https://practice.geeksforgeeks.org/problems/matching-pair5320/1
class Solution:
    def find (self, N):
        # code here
        return N+1

#{ 
#  Driver Code Starts

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        ob = Solution()
        print(ob.find(N))
# } Driver Code Ends
