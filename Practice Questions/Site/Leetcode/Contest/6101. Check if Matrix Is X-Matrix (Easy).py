# https://leetcode.com/contest/weekly-contest-299/problems/check-if-matrix-is-x-matrix/

class Solution:
    def checkXMatrix(self, grid: List[List[int]]) -> bool:
        z=len(grid)
        k=0
        for i in range(z):
            for j in range(z):
                if (i==j and grid[i][j]!=0):
                    k+=0
                elif (i==j and grid[i][j]==0):
                    k+=1
                    break
                elif (i!=j and grid[i][j]!=0 and i+j==z-1):
                    k+=0
                elif (i!=j and grid[i][j]==0 and i+j==z-1):
                    k+=1
                    break
                elif (i!=j and grid[i][j]==0):
                    k+=0
                else:
                    k+=1
                    break
                    
        if k==0:
            return True
        else:
            return False
