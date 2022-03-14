#Python program to find uncommon words from two Strings
s1=input("Enter sting one : ")
s2=input("Enter sting two : ")
j=s1.split(" ")
l=s2.split(" ")
k=[]
for i in j:
    if i not in l:
        k.append(i)
for i in l:
    if i not in j:
        k.append(i)
print("Uncommon words are : ")
for i in k:
    print(i,end =', ')
print("\n")