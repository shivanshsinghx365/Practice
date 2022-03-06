#https://www.codechef.com/problems/FLOW006
t=int(input(''))
for i in range(t):
    k=str(input(''))
    z=0
    for i in k:
        z+=int(i)
    print(z)
