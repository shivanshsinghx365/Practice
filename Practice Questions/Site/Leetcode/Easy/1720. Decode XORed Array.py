#https://leetcode.com/problems/decode-xored-array/
class Solution:
    def decode(self, encoded: List[int], first: int) -> List[int]:
        l=[first]
        for i in encoded:
            v=first^i
            l.append(v)
            first=v
        return l
