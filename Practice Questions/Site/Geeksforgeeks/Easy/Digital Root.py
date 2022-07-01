# https://practice.geeksforgeeks.org/problems/digital-root/0/?track=cip-flow-function-loop&batchId=238#

#User function Template for python3

class Solution:
    def digitalRoot(self, n):
        '''
        :param n: given number 
        :return: digital root as defined
        '''
        j=n
        if(n<10):
            return n
        else:
            while(j>9):
                x=0
                s=str(j)
                for i in s:
                    x+=int(i)
                j=x
            return j
        # code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys

#Contributed by : Nagendra Jha

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())
    
if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        print(Solution().digitalRoot(n))
# } Driver Code Ends
