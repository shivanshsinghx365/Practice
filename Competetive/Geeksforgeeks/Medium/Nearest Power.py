#https://practice.geeksforgeeks.org/contest/fork-python-module-1/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

    
def nearestPower(A, B):
    l=[]
    for i in range(0,B):
        c=(A**i)-B
        if c<0:
            l.append(-c)
        else:
            l.append(c)
            break
    k=min(l)
    h=l.index(k)
    
    return A**h
    ##Your code here
    ##return the closest power

#{ 
#Driver Code Starts.


import math

    
def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        A = int(input())
        B = int(input())
        print(nearestPower(A, B))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
