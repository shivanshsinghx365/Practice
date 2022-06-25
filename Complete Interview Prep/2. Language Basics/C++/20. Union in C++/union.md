### **Union**
---

This is used to create user defined data types just like structures and classes. 
Syntactically also they are similar
members are accessed using dot operator
if we have pointer to a union we can use arrow(->) operator

But in terms of internal representation of members unions are totally different

Example : 
A structure will 5 int, allocates memory to at least 5 integers
but A union allocates memory to just one integer & if a union has elements of different data types, then the union allocates memory equal to the largest datatype inside it

Note since all these are stored in same location, only the value of the last element declared is stored and is shown by other elements as well

**Applications of Union :**
1. Type punning : type punning is the term used for circumventing the formal type system in programming languages, we basically convert one type into another type without explicit typecasting and we get the internal representation of that particular type
2. Using anonymous union to use one type for multiple purposes.