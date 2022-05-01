#https://practice.geeksforgeeks.org/problems/common-divisors4712/1
#User function Template for python3
class Solution:
    def commDiv (self, a, b):
        sum=0
        if a<b:
            for i in range(1,a+1):
                if a%i==0 and b%i==0:
                    sum+=1
        else:
            for i in range(1,b+1):
                if a%i==0 and b%i==0:
                    sum+=1
        return sum
        # code here 

#{ 
#  Driver Code Starts
#Initial Template for Python 3
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        a, b = input().split()
        a = int(a)
        b = int(b)
        
        ob = Solution()
        print(ob.commDiv(a, b))
# } Driver Code Ends
