#https://www.codechef.com/CU1AP0005/problems/PCM
t=int(input())
for i in range(t):
    j=input()
    m=j.count('M')
    p=j.count("P")
    c=j.count("C")
    if m==1 and p==1 and c==1:
        print("YES")
    else:
        print("NO")
