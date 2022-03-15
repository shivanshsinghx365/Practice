"""Taxable income(Ti) in Rs.                                               Income Tax in Rs. 
Does not exceed Rs. 1,60,000                                                  Nil 
Is greater than Rs.1,60,000 and less than or equal to Rs. 5,00,000      (Ti-1,60,000)* 10% 
Is greater than Rs. 5,00,000 and less than or equal to Rs. 8,00,000  [(Ti – 5,00,000) * 20%] +34,000 
Is greater than Rs. 8,00,000                                         [(Ti – 8,00,000)* 30%] + 94,000 

Write a Python program to input that age, gender (male or female) and taxable income of a person.
If the age is more than 65 years or the gender is female, display “Wrong category”.
If the age is less than or equal to 65 years and the gender is male, 
compute and display the income tax payable as per the table given above."""


def  Tax_Calculator(taxable_Income,gender,age):
    if age>0 and age<65 and gender=="M":
        if taxable_Income<=160000:
            tax=float(0.00)
        elif taxable_Income>160000 and taxable_Income<=500000:
            tax=(taxable_Income-160000)*(0.10)
        elif taxable_Income>500000 and taxable_Income<=800000:
            tax=((taxable_Income-500000)*(0.20))+34000
        else:
            tax=((taxable_Income-800000)*(0.30))+94000
        return tax
    else:
        return "Wrong Category"

gender = str(input("Enter gender (M/F) : "))
age=int(input("Enter age : "))
taxable_Income= float(input("Enter taxable Income : "))
tax=Tax_Calculator(taxable_Income,gender,age)
print("TAX is = ",tax)