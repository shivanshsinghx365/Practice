#https://practice.geeksforgeeks.org/contest/fork-python-module-2/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def aweSum(A, B):
    k=A+B
    if k in range(20,41):
        return 42
    else:
        return k
    ##Your code here

#{ 
#Driver Code Starts.





def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        A = int(input())
        B = int(input())
        print(aweSum(A, B))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
