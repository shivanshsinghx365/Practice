#https://www.codechef.com/CCSTART2/problems/SQALPAT
n=int(input())
k=1
s=1
for i in range(1,n+1):
    if i%2==1:
        for j in range(5):
            print(s,end=' ')
            s+=1
        print('\n')
    else:
        s+=4
        for j in range(5):
            print(s,end=' ')
            s-=1
        s+=6
        print('\n')
