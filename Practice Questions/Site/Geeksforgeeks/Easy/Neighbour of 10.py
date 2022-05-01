#https://practice.geeksforgeeks.org/contest/fork-python-module-2/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def isNeighbour(N):
    ##Your code here
    k=0
    for i in range(N-2,N+3):
        if i%10==0:
            k=1
    if k==1:
        return True
    else:
        return False


#{ 
#Driver Code Starts.



def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        N = int(input())
        print(isNeighbour(N))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
