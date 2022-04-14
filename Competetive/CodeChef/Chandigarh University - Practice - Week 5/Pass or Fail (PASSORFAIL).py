#https://www.codechef.com/CU1PP0005/problems/PASSORFAIL
t=int(input())
for i in range(t):
    n,x,p=map(int,input().split(' '))
    if (x*3-(n-x))>=p:
        print("PASS")
    else:
        print("FAIL")
