#https://www.codechef.com/START32D/problems/COURSEREG
t=int(input())
for i in range(t):
    n,m,k=map(int,input().split(" "))
    if m>=n+k:
        print("Yes")
    else:
        print("No")
