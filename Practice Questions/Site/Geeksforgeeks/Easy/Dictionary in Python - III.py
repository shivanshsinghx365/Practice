# https://practice.geeksforgeeks.org/problems/dictionary-in-python-iii/0/?track=python-module-6&batchId=119#

#{ 
#Driver Code Starts
#Initial Template for Python 3

 # } Driver Code Ends
#User function Template for python3

# insert into dictionary
def insert_dict(query, dict):
    dict[query[1]]=query[2];
    # Your code here
    
    

# deleting from dictionary
def del_dict(query, dict):
    dict.pop(query[1])
    # Your code here
    
    
    
    

# print marks of required name
def print_dict(key, dict):
    if key in dict:
        print("Marks of",key,"is",dict[key])
        return True
    else:
        return False
    # Your code here
    
    
    

#{ 
#Driver Code Starts.
# Driver code
def main():
    # testcase input
    testcase = int(input())
    
    # looping through testcases
    while(testcase > 0):
        
        N = int(input())
        
        i = 0
        dict = {}
        while i < N:
            flag = False
            delete = False
            query = input().split()
            if(query[0] == 'i'):
                insert_dict(query, dict)
                print ("Inserted")
            
            if(query[0] == 'd'):
                if del_dict(query, dict) is False:
                    print ("-1")
                else:
                    print ("Deleted")
            
            if(query[0] == 'p'):
                if(print_dict(query[1], dict) is False):
                    print ("-1")
                    
            i+=1
            
        testcase -= 1


if __name__ == '__main__':
    main()
#} Driver Code Ends
