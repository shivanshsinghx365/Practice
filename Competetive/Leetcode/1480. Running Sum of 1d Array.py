#https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        l=[]
        s=0
        for i in nums:
            s+=i
            l.append(s)
        return l
