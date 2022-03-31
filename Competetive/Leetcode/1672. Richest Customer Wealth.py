#https://leetcode.com/problems/richest-customer-wealth/
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        l=[]
        for i in accounts:
            su=0
            for j in i:
                su+=j
            l.append(su)
        return (max(l))
