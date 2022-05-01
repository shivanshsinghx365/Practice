#https://www.codechef.com/COOK139D/problems/JGAMES
t=int(input(''))
for i in range(t):
    (x,y) = map(int, input().split(' '))
    s=x+y
    if s%2==0:
        print("Janmansh")
    else:
        print("Jay")
