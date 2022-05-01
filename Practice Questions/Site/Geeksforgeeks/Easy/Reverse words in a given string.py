#https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

# User function Template for python3

class Solution:
    
    #Function to reverse words in a given string.
    def reverseWords(self,S):
        j=S.split('.')
        Y=""
        for i in range(len(j)-1,0,-1):
            Y=Y+j[i]
            Y=Y+'.'
        Y=Y+j[0]
        return Y
        # code here 

#{ 
#  Driver Code Starts
# Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        s = str(input())
        obj = Solution()
        print(obj.reverseWords(s))

# } Driver Code Ends
