#https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        s=str(n)
        su=0
        p=1
        for i in s:
            f=int(i)
            su+=f
            p*=f
        return p-su
