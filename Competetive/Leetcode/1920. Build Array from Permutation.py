#https://leetcode.com/problems/build-array-from-permutation/submissions/
class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        k=[]
        l=len(nums)
        for i in range(l):
            k.append(nums[nums[i]])
        return k
