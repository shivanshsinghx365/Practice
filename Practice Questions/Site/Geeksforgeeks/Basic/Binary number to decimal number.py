# https://practice.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1/?page=2&category[]=CPP&category[]=cpp-strings&category[]=cpp-operator&category[]=%20CPP-Control-Flow&category[]=cpp-pointers&sortBy=accuracy#

#User function Template for python3

class Solution:
    def binary_to_decimal(self, str):
        s=str[::-1]
        sm=0
        pw=0
        j=0
        for i in s:
            ii=int(i)
            pw=2**(j)
            sm+=(pw*ii)
            j+=1
        return sm
        # Code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        str = input()
        ob = Solution();
        ans = ob.binary_to_decimal(str)
        print(ans)
# } Driver Code Ends
