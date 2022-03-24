"""Write a python program using return type with function to input a number and 
check if the number is prime or composite number using nested if-else loop."""

#method 1 without nesting
def checkprime(n):
    k=0
    l=''
    for i in range(2,n):
        if n%i==0:
            k+=1
    if k==0:
        l="The number is Prime\n"
    else:
        l="The number is Composite\n"
    return l

#Method 2 with nesting
def check(n):
    k=0
    l=''
    i=2
    if i<n:
        if n%i==0:
            k+=1
            exit
        else:
            i+=1
            pass
    if k==0:
        l="The number is Prime\n"
    else:
        l="The number is Composite\n"
    return l

num=int(input("Enter a number : "))
print(check(num))