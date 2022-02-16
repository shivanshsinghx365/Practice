#https://practice.geeksforgeeks.org/problems/snake-case0219/1
class Solution:
    def snakeCase(self, S , n):
        v=''
        k=S.lower()
        for i in k:
            if i.isspace():
                v+='_'
            else:
                v+=i
        return v
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        n=int(input())
        
        S=input()
        
        ob = Solution()
        print(ob.snakeCase(S , n))
# } Driver Code Ends
