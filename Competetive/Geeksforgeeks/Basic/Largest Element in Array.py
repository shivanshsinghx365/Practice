#https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1
#User function Template for python3

def largest( arr, n):
    big=arr[0]
    for i in arr:
        if i>big:
            big=i
    return big


#{ 
#  Driver Code Starts
#Initial Template for Python 3

def main():

    T = int(input())

    while(T > 0):
        n = int(input())
        a = [int(x) for x in input().strip().split()]
        print(largest(a, n))

        T -= 1


if __name__ == "__main__":
    main()





    
# } Driver Code Ends
