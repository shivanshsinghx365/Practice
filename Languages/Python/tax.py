def  Tax_Calculator(taxable_Income):
    if taxable_Income<=60000:
        tax=float(0)
    elif taxable_Income>60000 and taxable_Income<=150000:
        tax=taxable_Income*(0.05)
    elif taxable_Income>150000 and taxable_Income<=500000:
        tax=taxable_Income*(0.10)
    else:
        tax=taxable_Income*(0.15)
    return tax
name = input("Enter name : ")
pan = int(input("Enter PAN : "))
taxable_Income= float(input("Enter taxable Income : "))
tax=Tax_Calculator(taxable_Income)
print("TAX for Mr/Mrs ",name," PAN no. ",pan," is = ",tax)