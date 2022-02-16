#https://practice.geeksforgeeks.org/problems/convert-the-string1022/1
#User function Template for python3

class Solution:

    def transform(self, Str):
        a='AEIOUaeiou'
        j=''
        for i in Str:
            if i not in a:
                if i.isupper():
                    j+='#'
                    j+=i.lower()
                elif i.islower():
                    j+='#'
                    j+=i.upper()
        if len(j)!=0:
            return j
        else:
            return -1
        # code here
    

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

    t = int(input())

    for _ in range(t):
        Str = input()

        solObj = Solution()

        print(solObj.transform(Str))


# } Driver Code Ends
