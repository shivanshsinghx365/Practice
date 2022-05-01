#https://practice.geeksforgeeks.org/problems/magical-string3653/1#
#User function Template for python3
class Solution:
    def magicalString (ob,S):
        k=['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']
        s=''
        for i in S:
            if i in k:
                j=k.index(i)
                s+=k[25-j]
        return s
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        
        S=str(input())

        ob = Solution()
        print(ob.magicalString(S))
# } Driver Code Ends
