#https://leetcode.com/problems/xor-operation-in-an-array/
class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        l=[]
        v=0
        for i in range(n):
            l.append(start+2*i)
        for i in l:
            v=v^i
        return v
