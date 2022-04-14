#https://www.codechef.com/CU1PP0005/problems/CARRYGOLD
t=int(input())
for i in range(t):
    n,x,y=map(int,input().split(" "))
    if ((n+1)*y)>=x:
        print("YES")
    else:
        print("NO")
