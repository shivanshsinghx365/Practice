#https://www.codechef.com/CU1PP0005/problems/GOODWEAT
t=int(input())
for i in range(t):
    n=input()
    l=n.split(' ')
    if l.count('1')>3:
        print("Yes")
    else:
        print("No")
