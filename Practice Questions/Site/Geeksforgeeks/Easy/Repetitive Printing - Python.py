#https://practice.geeksforgeeks.org/problems/repeatitive-printing-python/1
#Driver Code Starts
#Initial Template for Python 3

# Python Code to print given string
# multiple times

 # } Driver Code Ends
#User function Template for python3

# Function to print given string 'x' times
def print_fun(string, x):
    print(string*x)
#{ 
#Driver Code Starts.

# Driver Code
def main():
    testcases = int(input())
    
    # Loop for testcases
    while(testcases > 0):
        string = input()
        x = int(input())
        print_fun(string, x)
        testcases -= 1

if __name__ == '__main__':
    main()
    
#} Driver Code Ends
