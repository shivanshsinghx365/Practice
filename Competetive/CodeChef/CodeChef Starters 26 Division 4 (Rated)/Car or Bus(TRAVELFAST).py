#https://www.codechef.com/START26D/problems/TRAVELFAST
t=int(input(''))
for i in range(t):
    s=input("")
    k=s.split(' ')
    b=int(k[0])
    c=int(k[1])
    if (b<c):
        print("BIKE")
    elif (c<b):
        print("CAR")
    else:
        print("SAME")
