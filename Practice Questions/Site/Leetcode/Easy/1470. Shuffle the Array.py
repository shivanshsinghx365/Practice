#https://leetcode.com/problems/shuffle-the-array/
class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
        l=[]
        for i in range(n):
            l.append(nums[i])
            l.append(nums[n+i])
        return l
