#https://practice.geeksforgeeks.org/problems/maximum-money2855/1
#User function Template for python3

class Solution:
    def maximizeMoney(self, N , K):
        if (N%2==0):
            amt=(N/2)*K
        else:
            amt=((N+1)/2)*K
        return int(amt)
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N,K = map(int,input().split())
        
        ob = Solution()
        print(ob.maximizeMoney(N,K))
# } Driver Code Ends
