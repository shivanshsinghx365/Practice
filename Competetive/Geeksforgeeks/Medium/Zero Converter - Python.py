#https://practice.geeksforgeeks.org/problems/zero-converter-python/1
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def pos(n):
    ## Write the code
    i=n
    if n!=0:
        while(i!=0):
            i-=1
            print(i,end=' ')
    else:
        print("already Zero")
def neg(n):
    i=n
    if n!=0:
        print(i,end=' ')
        while(i!=0):
            i+=1
            print(i,end=' ')
    else:
        print("already Zero")
    ##Write the code
    

#{ 
#Driver Code Starts.


def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        n = int(input())
        if(n > 0):
            pos(n)
        elif(n < 0):
            neg(n)
        else:
            print("already Zero",end="")
        print()
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
