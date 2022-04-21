#https://www.codechef.com/CU1PP0006/problems/BLITZ3_2
t=int(input())
for i in range(t):
    n,a,b=map(int,input().split(' '))
    print((2*(180+n))-(a+b))
