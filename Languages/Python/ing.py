#Write a Python program to add 'ing' at the end of a given string (length should be at least 3). 
# If the given string already ends with 'ing' then add 'ly' instead. If the string length of the given 
# string is less than 3, leave it unchanged. 
# Example:- Sample String : 'abc' Expected Result : 'abcing' 
# Sample String : 'string' Expected Result : 'stringly'

s=input("Enter a string : ")
if len(s)<3:
    print("Please enter a string with 3 or more letters")
else:
    if "ing" in s:
        print(s+"ly")
    else:
        print(s+"ing")