#https://www.codechef.com/CCSTART2/problems/REVMEE
n=int(input())
l=input().split(' ')
for i in range(len(l)-1,-1,-1):
    print(l[i],end=' ')
