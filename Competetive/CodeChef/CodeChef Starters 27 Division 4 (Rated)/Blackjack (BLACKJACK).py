#https://www.codechef.com/START27D/problems/BLACKJACK
t=int(input(''))
for i in range(t):
    j=input('')
    k=j.split(' ')
    l=[]
    for x in k:
        l.append(int(x))
    one=l[0]
    two=l[1]
    if (one+two)<11:
        print(-1)
    else:
        print(21-(one+two))
