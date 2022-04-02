#https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/
class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        l=[]
        for i in sentences:
            s=i.count(' ')+1
            l.append(s)
        return max(l)
