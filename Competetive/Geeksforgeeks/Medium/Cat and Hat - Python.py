#https://practice.geeksforgeeks.org/problems/cat-and-hat-python/1
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

def cat_hat(str):
    ptr=str
    l=ptr.split("cat")
    cat=len(l)-1
    k=str.split("hat")
    hat=len(k)-1
    if cat==hat:
        return True
    else:
        return False
  ##your code here##
  ##You need to write complete code this time 


#{ 
#Driver Code Starts.




def main():
    testcases=int(input()) #testcases
    while(testcases>0):
        str = input()
        print(cat_hat(str))
        testcases-=1
        


if __name__=='__main__':
    main()
#} Driver Code Ends
