#https://www.codechef.com/START27D/problems/POLYBAGS
t=int(input(''))
for i in range(t):
    j=int(input(''))
    if (j%10==0):
        print(j//10)
    else:
        print((j//10)+1)
