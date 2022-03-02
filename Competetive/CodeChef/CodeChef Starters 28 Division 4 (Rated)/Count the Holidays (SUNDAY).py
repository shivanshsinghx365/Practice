#https://www.codechef.com/START28D/problems/SUNDAY
t=int(input(''))
for i in range(t):
    n=int(input(''))
    j=input('')
    a=[]
    for x in j.split(' '):
        a.append(int(x))
    k=[6,13,20,27,7,14,21,28]
    for x in a:
        if x not in k:
            k.append(x)
    print(len(k))
