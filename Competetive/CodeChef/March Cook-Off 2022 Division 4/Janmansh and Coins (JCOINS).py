#https://www.codechef.com/COOK139D/problems/JCOINS
x=int(input(''))
for i in range(x):
    (n, k) = map(int, input().split(' '))
    s=(n*10)+(k*5)
    print(s)
