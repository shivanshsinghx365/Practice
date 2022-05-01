#https://www.codechef.com/CU1PP0004/problems/FACEDIR
def direction(n):
    u=n%4
    if u==0:
        print("North")
    elif u==1:
        print("East")
    elif u==2:
        print("South")
    else:
        print("West")
t=int(input())
for i in range(t):
    k=int(input())
    direction(k)
