#https://practice.geeksforgeeks.org/problems/red-or-green5711/1
#User function Template for python3

class Solution:
    def RedOrGreen(self,N,S):
        #code here
        k=[]
        for i in S:
            k.append(i)
        R=0
        G=0
        for i in k:
            if i=='R':
                R+=1
            elif i=="G":
                G+=1
        if (R>=G):
            return G
        else:
            return R
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        S=input()
        
        ob=Solution()
        print(ob.RedOrGreen(N,S))
# } Driver Code Ends
