#https://www.codechef.com/problems/CCISLAND
t=int(input(''))
for i in range(t):
    x,y,xr,yr,d=map(int,input('').split(' '))
    r1=x/xr
    r2=y/yr
    if r1>=d and r2>=d:
        print("YES")
    else:
        print("NO")
