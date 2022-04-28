#https://www.codechef.com/CU1PP0004/problems/HARDBET
t=int(input())
for i in range(t):
    sa,sb,sc=map(int,input().split(' '))
    l=[]
    l.append(sa)
    l.append(sb)
    l.append(sc)
    mi=min(l)
    if mi==sa:
        print("Draw")
    elif mi==sb:
        print("Bob")
    else:
        print("Alice")
