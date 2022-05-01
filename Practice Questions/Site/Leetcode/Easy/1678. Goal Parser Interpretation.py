#https://leetcode.com/problems/goal-parser-interpretation/
class Solution:
    def interpret(self, command: str) -> str:
        s=''
        l=len(command)
        i=0
        while i in range(l):
            if command[i]=="G":
                s+='G'
                i+=1
            elif command[i]=='(' and command[i+1]==')':
                s+='o'
                i+=2
            else:
                s+='al'
                i+=4
        return s
