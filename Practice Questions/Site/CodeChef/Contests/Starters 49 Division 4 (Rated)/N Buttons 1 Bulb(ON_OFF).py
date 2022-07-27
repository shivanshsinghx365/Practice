#https://www.codechef.com/START49D/problems/ON_OFF

t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    s1=input()
    k=0
    for i in range(n):
        if(s[i]!=s1[i]):
            k+=1
    if(k%2==0):
        print(1)
    else:
        print(0)
