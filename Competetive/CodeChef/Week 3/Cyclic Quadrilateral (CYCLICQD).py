#https://www.codechef.com/problems/CYCLICQD
t=int(input(''))
for i in range(t):
    a,b,c,d=map(int,input().split(' '))
    if a+c==180 and b+d==180:
        print("YES")
    else:
        print("NO")