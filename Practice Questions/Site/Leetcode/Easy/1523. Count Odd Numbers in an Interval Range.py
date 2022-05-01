#https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/
class Solution:
    def countOdds(self, low: int, high: int) -> int:
        l=low%2
        h=high%2
        if l==0 and h==0:
            s=(high-low)//2
        elif l==1 and h==1:
            s=((high-low)//2)+1
        else:
            s=(1+high-low)//2
        return s
