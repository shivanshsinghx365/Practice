#https://practice.geeksforgeeks.org/contest/fork-python-module-1/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def mean(D,M):
    a=(M*3)
    b=a+D
    c=b/4
    return int(c)
    ##Your code here

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        D = int(input()) ##taking d as input
        M = int(input()) ## taking mean of 3 numbers
        print(mean(D, M))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
