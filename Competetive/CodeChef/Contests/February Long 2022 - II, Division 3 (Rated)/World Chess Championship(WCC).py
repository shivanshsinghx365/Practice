#https://www.codechef.com/FEB222C/problems/WCC
t=int(input(''))
for i in range(t):
    x=int(input(''))
    s=input('')
    c=0
    d=0
    n=0
    C=0
    N=0
    for j in s:
        if j=='C':
            c+=1
        elif j=='N':
            n+=1
        else:
            d+=1
    C=c*2+d*1
    N=n*2+d*1
    if (C>N):
        print(60*x)
    elif (C<N):
        print(40*x)
    else:
        print(55*x)
