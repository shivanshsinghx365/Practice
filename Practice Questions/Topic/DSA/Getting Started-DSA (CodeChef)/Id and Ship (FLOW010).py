#https://www.codechef.com/problems/FLOW010
t=int(input(''))
for i in range(t):
    j=input('')
    if j=='b' or j=='B':
        print("BattleShip")
    elif j=='c' or j=='C':
        print("Cruiser")
    elif j=='d' or j=='D':
        print("Destroyer")
    else:
        print("Frigate")
