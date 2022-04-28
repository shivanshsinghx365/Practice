#https://www.codechef.com/START28D/problems/SELFDEF
t=int(input(''))
for i in range(t):
    n=int(input(''))
    s=input('')
    z=0
    k=[]
    for l in s.split(' '):
        k.append(int(l))
    for x in range(len(k)):
        if k[x]>=10 and k[x]<=60:
            z+=1
    print(z)
