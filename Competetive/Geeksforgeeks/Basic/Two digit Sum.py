#https://practice.geeksforgeeks.org/contest/fork-python-module-1/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def digitsSum(N):
    x=N%10
    y=int(N/10)
    return x+y
    ##Your code here

#{ 
#Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        N = int(input())
        print(digitsSum(N))
        testcases -= 1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
