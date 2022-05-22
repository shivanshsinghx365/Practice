#https://codeforces.com/problemset/problem/69/A
t=int(input())
l=[]
for i in range(t):
    a,b,c=map(int,input().split(' '))
    ls=[]
    ls.append(a)
    ls.append(b)
    ls.append(c)
    l.append(ls)
x=0
y=0
z=0
for i in l:
    x+=i[0]
    y+=i[1]
    z+=i[2]
if x==0 and y==0 and z==0:
    print("YES")
else:
    print("NO")
