#https://leetcode.com/problems/count-items-matching-a-rule/
class Solution:
    def countMatches(self, items: List[List[str]], ruleKey: str, ruleValue: str) -> int:
        s=0
        if ruleKey=='type':
            for i in items:
                if i[0]==ruleValue:
                    s+=1
        elif ruleKey=='color':
            for i in items:
                if i[1]==ruleValue:
                    s+=1
        else:
            for i in items:
                if i[2]==ruleValue:
                    s+=1
        return s
