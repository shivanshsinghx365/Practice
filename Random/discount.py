"""A cloth showroom has announced the following festival discounts on the purchase of items based on
the total cost of the items purchased:
    Total cost                  Discount (in Percentage)
    Less than Rs. 2000                    5%
    Rs. 2001 to Rs. 5000                  25%
    Rs. 5001 to Rs. 10000                 35%
    Above Rs. 10000                       50%     
Write Python a program to input the total cost and to compute and 
display the amount to be paid by the customer after availing the discount by Return type with Function."""

def discount(cost):
  if cost<2001:
    dis=0.05
  elif cost>=2001 and cost<5001:
    dis=0.25
  elif cost>=5001 and cost<10001:
    dis=0.35
  elif cost>=10001:
    dis=0.50
  return dis*cost
  
cost = float(input("Enter the total cost : "))
dis=discount(cost)
print("Final amount to be paid is = ",cost-dis)