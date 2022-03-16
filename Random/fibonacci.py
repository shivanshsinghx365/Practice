"""Generate and display the first 10 terms of the Fibonacci
series 0,1,1,2,3,5…. output must be same and follows
$$2
$$$3
$$$$$5
and So on.......
The first two Fibonacci numbers are 0 and 1, and each
subsequent number is the sum of the previous two.
For an incorrect choice, an appropriate error message should be displayed for wrong type of input.... 
"""

try:
    n=int(input("Enter how many numbers to print : "))
    first=1
    second=1
    print(first,end=' ')
    print(second,end=' ')
    for i in range(3,n):
        third=first+second
        first=second
        second=third
        print(third,end=' ')
    print("\n")
except:
    print("Incorrect input")