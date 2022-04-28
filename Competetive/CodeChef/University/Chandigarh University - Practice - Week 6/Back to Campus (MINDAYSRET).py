#https://www.codechef.com/CU1PP0006/problems/MINDAYSRET
t=int(input())
for i in range(t):
    n,k=map(int,input().split(' '))
    s=n%k
    if s==0:
        print(n//k)
    else:
        print(n//k +1)
