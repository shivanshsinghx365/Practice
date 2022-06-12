#https://leetcode.com/contest/weekly-contest-297/problems/calculate-amount-paid-in-taxes/
class Solution:
    def calculateTax(self, brackets: List[List[int]], income: int) -> float:
        sumx=0.00000
        k=0
        for i in range(len(brackets)):
            if i==0 and (income<=brackets[i][0]):
                sumx+=((income)*brackets[i][1]*(0.01))
                break
            elif (income<=brackets[i][0] and i!=0):
                k=i
                break
        if k!=0:
            for j in range(k):
                if (j==0):
                    sumx+=(brackets[j][0]*brackets[j][1]*(0.01))
                if (j!=0):
                    sumx+=((brackets[j][0]-brackets[j-1][0])*brackets[j][1]*(0.01))
            sumx+=(income-brackets[k-1][0])*brackets[k][1]*(0.01)
        return sumx
