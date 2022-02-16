#https://practice.geeksforgeeks.org/problems/slicing-in-string-python/1
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# Function to join given bound_by and tag
def join_middle(bound_by, tag_name):
  # complete the statement below to return the string as required
  n=len(bound_by)//2
  return bound_by[0:n] + tag_name + bound_by[n:]

#{ 
#Driver Code Starts.
# Driver Code
def main():
    # testcase input
    testcases = int(input())
    
    # looping through testcases
    while(testcases > 0):
        string = input().split()
        bound_by = string[0]
        tag_name = string[1]
        
        testcases -= 1
        
        print (join_middle(bound_by, tag_name))

if __name__ == '__main__':
    main()
#} Driver Code Ends
