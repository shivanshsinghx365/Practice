#https://www.codechef.com/LTIME105D/problems/CHESSDIST
t=int(input(''))
for i in range(t):
    k=input('')
    a=[]
    for i in k.split(' '):
        a.append(int(i))
    k=[]
    k.append(abs(a[0]-a[2]))
    k.append(abs(a[1]-a[3]))
    print(max(k))
