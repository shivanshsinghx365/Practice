#https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        l=[]
        c=[]
        ln=len(candies)
        for i in range(ln):
            c.append(candies[i]+extraCandies)
        m=max(candies)
        for i in range(ln):
            if c[i]>=m:
                l.append(True)
            else:
                l.append(False)
        return l
