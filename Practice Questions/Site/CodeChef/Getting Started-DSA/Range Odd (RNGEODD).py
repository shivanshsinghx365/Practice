#https://www.codechef.com/CCSTART2/problems/RNGEODD
low,high=map(int,input().split(' '))
for i in range(low,high+1):
    if i%2!=0:
        print(i,end=' ')
