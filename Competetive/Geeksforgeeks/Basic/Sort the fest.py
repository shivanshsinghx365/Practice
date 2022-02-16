#https://practice.geeksforgeeks.org/problems/sort-the-fest0016/1
#User function Template for python3


class Solution:
    def is_common(self, s, t):
        k=0
        for i in s:
            if i in t:
                k+=1
        if k==0:
            return "BEHAPPY"
        else:
            return "CHANGE"
        # Code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        s = list(input().split())
        t = list(input().split())
        ob = Solution()
        ans = ob.is_common(s, t)
        print(ans)
# } Driver Code Ends
