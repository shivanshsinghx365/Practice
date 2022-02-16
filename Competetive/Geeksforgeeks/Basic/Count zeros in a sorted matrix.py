#https://practice.geeksforgeeks.org/problems/count-zeros-in-a-sorted-matrix/1
#User function Template for python3
class Solution:
    def countZeroes(self, A, N):
        sum=0
        for i in A:
            for j in i:
                if j==0:
                    sum+=1
        return sum
        
    
    


#{ 
#  Driver Code Starts
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input().strip())
        arr = list(map(int, input().strip().split()))
        matrix = [[0 for i in range(n)]for j in range(n)]
        k=0
        for i in range(n):
            for j in range(n):
                matrix[i][j] = arr[k]
                k+=1
        
        ob = Solution()
        print (ob.countZeroes(matrix, n))
        
# } Driver Code Ends
