#https://www.codechef.com/CCSTART2/problems/DIFACTRS
n=int(input())
l=''
s=0
for i in range(1,n+1):
    if n%i==0:
        l+=str(i)
        l+=' '
        s+=1
print(s)
print(l)
