#https://www.codechef.com/CU1PP0001/problems/SNDMAX
n=int(input(""))
for i in range(n):
    a=[]
    k=input('')
    s=k.split()
    for i in s:
        a.append(int(i))
    maxy=max(a)
    mini=min(a)
    for i in a:
        if i!=maxy and i!=mini:
            print(i)
