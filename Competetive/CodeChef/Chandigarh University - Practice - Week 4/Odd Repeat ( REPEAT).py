#https://www.codechef.com/CU1PP0004/problems/REPEAT
t=int(input(''))
for i in range(t):
    n,k,s=map(int,input().split(" "))
    l=n+k-1
    u=[]
    for i in range(1,n+1):
        u.append((2*i)-1)
    su=sum(u)
    f=s-su
    for i in u:
        if f%i==0:
            if n+(f//i)==l:
                print(i)
