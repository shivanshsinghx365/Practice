#https://practice.geeksforgeeks.org/contest/fork-python-module-2/problems
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def doge_count(str):
    count = 0
    alpha ='qwertyuiopasdfghjklzxcvbnm'
    for i in alpha:
        l=str
        k='do'+i+'e'
        j=l.split(k)
        z=len(j)
        count = count + z - 1
    ##Your code here
    return count

#{ 
#Driver Code Starts.



def main():
    testcases = int(input()) #testcases
    while(testcases > 0):
        str = input()
        print(doge_count(str))
        testcases -= 1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
