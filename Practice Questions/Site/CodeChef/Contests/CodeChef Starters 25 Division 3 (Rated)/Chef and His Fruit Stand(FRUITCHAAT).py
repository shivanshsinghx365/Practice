#https://www.codechef.com/START25C/problems/FRUITCHAAT
t=int(input())
while(t>0):
    a = input()
    k=a.split(' ')
    x=int(k[0])
    y=int(k[1])
    c=2*y
    if (c>x):
        print(x//2)
    elif (c<x):
        print(y)
    else:
        print(y)
    t=t-1
