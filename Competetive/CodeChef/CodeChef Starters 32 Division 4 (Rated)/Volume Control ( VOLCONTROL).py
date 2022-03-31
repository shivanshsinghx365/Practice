#https://www.codechef.com/START32D/problems/VOLCONTROL
t=int(input())
for i in range(t):
    n,k=map(int,input().split(" "))
    print(abs(n-k))
