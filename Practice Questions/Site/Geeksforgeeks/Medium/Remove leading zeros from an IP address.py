#https://practice.geeksforgeeks.org/problems/remove-leading-zeros-from-an-ip-address3530/1
#User function Template for python3

class Solution:
    def newIPAdd(self, S):
        # code here
        k=S.split('.')
        z=''
        y=k.pop()
        for i in k:
            j=int(i)
            z=z+str(j)
            z=z+'.'
        c=int(y)
        z=z+str(c)
        return z
            
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.newIPAdd(s)
        print(ans)
# } Driver Code Ends
