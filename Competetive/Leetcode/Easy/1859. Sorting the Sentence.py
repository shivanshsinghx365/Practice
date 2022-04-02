#https://leetcode.com/problems/sorting-the-sentence/
class Solution:
    def sortSentence(self, s: str) -> str:
        t=s.split(' ')
        ln=len(t)
        d={}
        for i in t:
            d[int(i[-1])]=i[:-1]
        s=''
        for i in range(1,ln):
            s+=d[i]
            s+=' '
        s+=d[ln]
        return s
