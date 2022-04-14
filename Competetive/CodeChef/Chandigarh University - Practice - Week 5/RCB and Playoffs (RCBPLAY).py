#https://www.codechef.com/CU1PP0005/problems/RCBPLAY
t=int(input())
for i in range(t):
    s=input().split(' ')
    x=int(s[0])
    y=int(s[1])
    z=int(s[2])
    if (x+(2*z))>=y:
        print("Yes")
    else:
        print("No")
