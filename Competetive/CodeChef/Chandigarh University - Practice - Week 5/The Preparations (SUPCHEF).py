#https://www.codechef.com/CU1PP0005/problems/SUPCHEF
t=int(input())
for i in range(t):
    m,n,k=map(int,input().split(' '))
    if n*k<m:
        print("YES")
    else:
        print("NO")
