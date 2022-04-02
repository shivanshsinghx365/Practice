#https://leetcode.com/problems/defanging-an-ip-address/
class Solution:
    def defangIPaddr(self, address: str) -> str:
        s=address.replace('.','[.]')
        return s
