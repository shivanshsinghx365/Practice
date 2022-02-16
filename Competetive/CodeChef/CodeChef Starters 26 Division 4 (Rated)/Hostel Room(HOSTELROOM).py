#https://www.codechef.com/START26D/problems/HOSTELROOM
t=int(input(''))
for i in range(t):
    s=input('')
    k=s.split(' ')
    x=int(k[1])
    y=x
    f=input('')
    d=f.split(' ')
    z=[]
    for i in d:
        z.append(y)
        y+=int(i)
        z.append(y)
    print(max(z))
