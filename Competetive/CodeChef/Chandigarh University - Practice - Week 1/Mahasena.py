#https://www.codechef.com/CU1PP0001/problems/AMR15A
n=int(input(''))
k=input('')
s=k.split(' ')
l=0
u=0
for i in s:
    if int(i)%2==0:
        l+=1
    else:
        u+=1
if (l>u):
    print("READY FOR BATTLE")
else:
    print("NOT READY")
