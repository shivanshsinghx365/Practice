#https://practice.geeksforgeeks.org/problems/game-with-nos3123/1
#User function Template for python3

def game_with_number (arr,  n) : 
    #Complete the function
    k=[]
    for i in range(0,n-1):
        x=arr[i]^arr[i+1]
        k.append(x)
    k.append(arr[n-1])
    return k
    
    
#{ 
#  Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    res = game_with_number(arr, n);
    print(*res)




# } Driver Code Ends
