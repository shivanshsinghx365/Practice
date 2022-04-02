#https://leetcode.com/problems/shuffle-string/
class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        l=[]
        ln=len(s)
        c=list(s)
        k=''
        for i in range(ln):
            c[indices[i]]=s[i]
        for i in c:
            k+=i
        return k
