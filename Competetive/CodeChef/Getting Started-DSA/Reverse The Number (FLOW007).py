#https://www.codechef.com/LP0TO101/problems/FLOW007
t=int(input(''))
for i in range(t):
    k=input('')
    s=''
    s=k[::-1]
    u=''
    z=0
    for j in s:
        if z==0 and j=='0':
            pass
        else:
            u+=j
            z+=1
    print(u)
