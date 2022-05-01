#https://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1

#User function Template for python3


class Solution:
    
    #Function to return sum of upper and lower triangles of a matrix.
    def sumTriangles(self,matrix, n):
        # code here
        s1=0
        s2=0
        k=[]
        for i in range(n):
            for j in range(i,n):
                s1+=matrix[i][j]
        for i in range(n):
            for j in range(0,i+1):
                s2+=matrix[i][j]
        k.append(s1)
        k.append(s2)
        return k
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        n = int(input())
        matrix = [[0 for j in range(n)] for i in range(n)]
        line1 = [int(x) for x in input().strip().split()]

        k=0
        for i in range(n):
            for j in range (n):
                matrix[i][j]=line1[k]
                k+=1
        obj = Solution()
        ans = obj.sumTriangles(matrix, n)
        for i in ans:
            print(i,end=" ")
        print()
# } Driver Code Ends
