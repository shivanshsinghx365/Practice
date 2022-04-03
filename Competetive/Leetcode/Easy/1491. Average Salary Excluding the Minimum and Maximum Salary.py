#https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/
class Solution:
    def average(self, salary: List[int]) -> float:
        s=sum(salary)
        s=s-max(salary)-min(salary)
        l=len(salary)-2
        avg=s/l
        return avg
