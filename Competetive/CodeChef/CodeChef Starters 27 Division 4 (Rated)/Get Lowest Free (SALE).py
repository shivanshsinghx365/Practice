#https://www.codechef.com/START27D/problems/SALE
t=int(input(''))
for i in range(t):
    k=input('')
    l=[]
    for j in k.split(' '):
        l.append(int(j))
    one=l[0]
    two=l[1]
    three=l[2]
    mini=min(l)
    print(one+two+three-mini)
