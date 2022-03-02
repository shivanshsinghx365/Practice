#https://www.codechef.com/START28D/problems/QUALIFY
t=int(input(''))
for j in range(t):
    s=input('')
    k=[]
    for i in s.split(' '):
        k.append(int(i))
    if ((k[1]+(k[2]*2))>=k[0]):
        print("Qualify")
    else:
        print("NotQualify")
