#https://www.codechef.com/CU1AP0003/problems/HOLIURAL
t=int(input(''))
for i in range(t):
    n,k=map(int,input('').split(" "))
    d=input().split(" ")
    dl=[]
    l=input().split(" ")
    ll=[]
    for i in d:
        dl.append(int(i))
    for i in l:
        ll.append(int(i))
    y=[]
    for i in range(n):
        su=(dl[i]*k)+ll[i]
        y.append(su)
    print(min(y))
