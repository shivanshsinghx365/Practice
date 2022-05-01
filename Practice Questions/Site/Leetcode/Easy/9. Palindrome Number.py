#https://leetcode.com/problems/palindrome-number/
class Solution:
    def isPalindrome(self, x: int) -> bool:
        f=str(x)
        if f==f[::-1]:
            return True
        else:
            return False
