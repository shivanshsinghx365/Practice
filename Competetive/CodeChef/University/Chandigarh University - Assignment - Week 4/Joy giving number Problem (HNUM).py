#https://www.codechef.com/CU1AP0004/problems/HNUM
t=int(input())
for i in range(t):
    n=input()
    num=int(n)
    l=list(n)
    s=0
    for i in l:
        s+=int(i)
    if num%s==0:
        print("Yes")
    else:
        print("No")
