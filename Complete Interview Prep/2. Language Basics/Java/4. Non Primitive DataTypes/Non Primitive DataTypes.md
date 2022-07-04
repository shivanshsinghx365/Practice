### **Non Primitive DataTypes**
---

these are basically classes of some form, either pre defined or user-defined

we create variables of non-primitive type using "new" operator

we access its element using dot "." operator

**Primitive VS Non-Primitive**
1. Non-primitive type variables are always references, but primitives are normal variables
2. Memory of non-primitive types is always stored in heap instead of stack bcz they are dynamically allocated using new keyword if we just create them and don't use new, we will just create a reference with no memory attached
3. Member of non-primitive get default values (ex : int gets 0, boolean gets false, non-primitive inside non-primitives get null)

Note : If we try to access a primitive type that is not initialized we get compiler error, that variable is not initialized before accessing