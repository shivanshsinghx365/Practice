#https://www.codechef.com/CCSTART2/problems/REVSTRPT
N=int(input())
for i in range(N):
    s=''
    s=' '*(N-1-i)
    s+=((i+1)*('*'))
    print(s)
