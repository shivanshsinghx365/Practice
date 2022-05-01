#https://www.codechef.com/LP0TO101/problems/INTEST
(n, k) = map(int, input().split(' '))
s=0
for i in range(n):
    it=int(input(''))
    if it%k==0:
        s+=1
print(s)
