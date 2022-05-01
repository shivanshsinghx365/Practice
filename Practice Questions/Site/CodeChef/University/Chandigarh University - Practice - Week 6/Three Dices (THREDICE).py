#https://www.codechef.com/CU1PP0006/problems/THREDICE
t=int(input())
for i in range(t):
    a,b=map(int,input().split(' '))
    if a+b<6:
        print((6-a-b)/6)
    else:
        print(0)
