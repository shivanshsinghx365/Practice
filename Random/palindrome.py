#Python program to check whether the string is Symmetrical or Palindrome
s=input("Enter a string : ")
l=s[::-1]
if s==l:
    print("It is palindrome\n")
else:
    print("It is NOT palindrome\n")