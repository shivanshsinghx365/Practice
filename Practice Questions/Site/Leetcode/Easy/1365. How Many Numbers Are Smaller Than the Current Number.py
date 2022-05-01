#https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
class Solution:
    def smallerNumbersThanCurrent(self, nums: List[int]) -> List[int]:
        s=[]
        for i in nums:
            u=0
            for j in nums:
                if i>j:
                    u+=1
            s.append(u)
        return s
