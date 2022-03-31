#https://www.codechef.com/START32D/problems/FINDSHOES
t=int(input())
for i in range(t):
    n,l=map(int,input().split(" "))
    tot=2*n
    if l>=n:
        print(n)
    else:
        z=n-l
        print((2*z)+(l))
