#https://www.codechef.com/problems/CRICRANK
t=int(input(''))
for i in range(t):
    s1=0
    r1,w1,c1=map(int,input().split(' '))
    s2=0
    r2,w2,c2=map(int,input().split(' '))
    if r1>r2:
        s1+=1
    else:
        s2+=1
    if w1>w2:
        s1+=1
    else:
        s2+=1
    if c1>c2:
        s1+=1
    else:
        s2+=1
        
    if s1>s2:
        print("A")
    else:
        print("B")
