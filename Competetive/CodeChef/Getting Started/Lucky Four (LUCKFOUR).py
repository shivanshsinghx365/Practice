#https://www.codechef.com/problems/LUCKFOUR
t=int(input(''))
for i in range(t):
    k=str(input(''))
    z=0
    for i in k:
        if int(i)==4:
            z+=1
    print(z)
