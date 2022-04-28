"""Find the sum of the digits of an integer that is input.
Sample Input: 15390
Sample Output: Sum of the digits=18
For an incorrect choice, an appropriate error message should be displayed"""

try:
    i=int(input("Enter a number : "))
    s=str(i)
    sum=0
    for j in s:
        sum+=int(j)
    print("Sum of its digits is =",sum)
except:
    print("Incorrect Input")