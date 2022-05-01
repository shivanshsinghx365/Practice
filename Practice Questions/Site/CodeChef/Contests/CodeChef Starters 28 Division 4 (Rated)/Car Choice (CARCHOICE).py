#https://www.codechef.com/START28D/problems/CARCHOICE
t=int(input(''))
for i in range(t):
    s=input('')
    a=[]
    for j in s.split(' '):
        a.append(int(j))
    if (a[2]/a[0])<(a[3]/a[1]):
        print(-1)
    elif (a[2]/a[0])>(a[3]/a[1]):
        print(1)
    else:
        print(0)
