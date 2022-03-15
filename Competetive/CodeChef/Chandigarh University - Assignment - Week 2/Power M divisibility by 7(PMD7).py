#https://www.codechef.com/CU1AP0002/problems/PMD7
t=int(input(''))
for i in range(t):
    x,m=map(str,input().split(' '))
    m=int(m)
    s=''
    for j in x:
        z=int(j)**m
        z=z%10
        s+=str(z)
    s=s[::-1]
    if int(s)%7==0:
        print("YES")
    else:
        print("NO")
