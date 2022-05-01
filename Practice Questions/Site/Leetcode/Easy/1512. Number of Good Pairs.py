#https://leetcode.com/problems/number-of-good-pairs/
class Solution:
    def numIdenticalPairs(self, nums: List[int]) -> int:
        s=0
        l=len(nums)
        for i in range(l):
            for j in range(i+1,l):
                if i<j and nums[i]==nums[j]:
                    s+=1
        return s
