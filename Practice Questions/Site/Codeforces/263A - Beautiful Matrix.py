#https://codeforces.com/problemset/problem/263/A
l=[]
for i in range(5):
    ls=[]
    a,b,c,d,e=map(int,input().split(' '))
    ls.append(a)
    ls.append(b)
    ls.append(c)
    ls.append(d)
    ls.append(e)
    l.append(ls)
x=0
y=0
for i in range(5):
    for j in range(5):
        if l[i][j]==1:
            x=i
            y=j
            break
print(abs(x-2)+abs(y-2))
