#https://www.codechef.com/CU1PP0004/problems/MAX_DIFF
t=int(input())
for i in range(t):
    n,s=map(int,input().split(' '))
    l=[]
    if n>=s:
        print(s)
    else:
        print(abs(s-n-n))
