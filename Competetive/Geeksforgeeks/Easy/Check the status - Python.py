#https://practice.geeksforgeeks.org/problems/check-the-status/1
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to check value and 
# return accordingly
def check_status(a, b, flag):
    ##Your code here
    if ((a>=0 and b<0) and flag==False):
        return True
    elif ((b>=0 and a<0) and flag==False):
        return True
    elif ((a<0 and b<0) and flag==True):
        return True
    else:
        return False
    ##Either True or False is returned

#{ 
#Driver Code Starts.

# Driver Code
def main():
    
    # Testcase input
    testcases = int(input())
    
    # Looping through testcases
    while(testcases > 0):
        a = int(input())
        b = int(input())
        flag = input()
        
        if(flag == "True"):
            flag = True
        else:
            flag = False
        
        if(check_status(a, b, flag) is True):
            print ("True")
        else:
            print ("False")
        
        testcases -= 1
 
if __name__ == '__main__':
    main()
#} Driver Code Ends
