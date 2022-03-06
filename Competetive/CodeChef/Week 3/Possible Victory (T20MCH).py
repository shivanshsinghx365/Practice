#https://www.codechef.com/problems/T20MCH
(a,b,c)=map(int,input().split(" "))
s=((20-b)*36)+c
if a<s:
    print("YES")
else:
    print("NO")
