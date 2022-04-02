#https://leetcode.com/problems/decompress-run-length-encoded-list/
class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        l=[]
        n=len(nums)
        for i in range(0,n,2):
            t=nums[i]
            v=nums[i+1]
            for j in range(t):
                l.append(v)
        return l
