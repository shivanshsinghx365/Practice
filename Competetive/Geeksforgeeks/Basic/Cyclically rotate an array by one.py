#https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

def rotate( arr, n):
    k=[]
    for i in range(n):
        k.append(arr[i])
    z=arr[n-1]
    for i in range(0,n-1):
        arr[i+1]=k[i]
    arr[0]=z
    
    
    


#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        rotate(a, n)
        print(*a)

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends
