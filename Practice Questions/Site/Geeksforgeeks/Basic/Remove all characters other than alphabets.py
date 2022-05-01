#https://practice.geeksforgeeks.org/problems/remove-all-characters-other-than-alphabets4923/1
#User function Template for python3

class Solution:
    def removeSpecialCharacter (self, S):
        k=''
        for i in S:
            if i.isalpha():
                k+=i
        if len(k)==0:
            return -1
        else:
            return k
        #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int(input())
    for _ in range (t):
        S = input()
        ob = Solution()
        print(ob.removeSpecialCharacter(S))


# } Driver Code Ends
