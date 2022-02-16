#https://www.codechef.com/START26D/problems/VALENTINE
t=int(input(''))
for i in range(t):
    s=input('')
    f=s.split(' ')
    x=int(f[0])
    y=int(f[1])
    print(x//y)
