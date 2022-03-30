#https://leetcode.com/problems/search-a-2d-matrix/
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        k=False
        for i in matrix:
            if target in i:
                k=True
                break
        return k
