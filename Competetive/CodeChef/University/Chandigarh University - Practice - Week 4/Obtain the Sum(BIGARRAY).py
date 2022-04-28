#https://www.codechef.com/CU1PP0004/problems/BIGARRAY
t=int(input())
for i in range(t):
    n,s=map(int,input().split(' '))
    su=(n*(n+1))//2
    j=0
    l=su-s
    if l in range(1,n+1):
        print(l)
    else:
        print(-1)
