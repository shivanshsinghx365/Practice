#https://www.codechef.com/problems/LAZYCHF
t=int(input(''))
for i in range(t):
    x,y,z=map(int,input().split(' '))
    a=[]
    a.append(x*y)
    a.append(x+z)
    print(min(a))
