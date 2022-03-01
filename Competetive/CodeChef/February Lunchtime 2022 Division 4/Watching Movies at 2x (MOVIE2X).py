#https://www.codechef.com/LTIME105D/problems/MOVIE2X
k=input('')
a=[]
for i in k.split(' '):
    a.append(int(i))
print(a[0]-(a[1]//2))
