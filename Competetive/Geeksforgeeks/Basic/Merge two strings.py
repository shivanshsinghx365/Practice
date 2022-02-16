#https://practice.geeksforgeeks.org/problems/merge-two-strings2736/1
#User function Template for python3
class Solution:
    def merge(self, S1, S2):
        s=''
        l1=len(S1)
        l2=len(S2)
        if l1>=l2:
            for i in range(l2):
                s+=S1[i]
                s+=S2[i]
            s+=S1[l2:l1]
        else:
            for i in range(l1):
                s+=S1[i]
                s+=S2[i]
            s+=S2[l1:l2]
        return s
            
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range(t):
        S1,S2 = map(str,input().strip().split())
        ob = Solution()
        print(ob.merge(S1, S2))
# } Driver Code Ends
