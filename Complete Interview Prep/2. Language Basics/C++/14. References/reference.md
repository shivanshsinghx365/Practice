### Reference

These simply create another name for a variable

**Applications :**
1. To modify a passed parameter
2. Avoid copy of large objects during function calls
3. Modifications in for-each loops
4. Avoid copy of large object in for-each (Closely related to 2 & 3)

Except for-each loops or iterating through vector or any other container,all other things mentioned above can also be achieved by using pointer as well

**NOTE :** Multiple applications can happen at the same time, example: maybe you want to avoid copy of a vector element in a for-each loop, and you decide to increase each element by 5. So you just used 1,3,4 together :)

Also, if you are using reference just to reduce CPU & Memory usage and not to modify them, then its better to use const as well to avoid changing of original values, since you are just accessing them and not modifying them anyways, This also prevent any accidental changes that might have occurred by mistake

**NOTE :** 
1. REFERENCE ARE ASSIGNED ONLY ONCE & once a reference has been assigned it CAN NOT BE CHANGED
2. When you return a reference (of a local STATIC variable) from a function, you get hold of that variable and use/modify it outside the function as well
3. We should never return reference like point 2 to a non static local variable, this happens because non-static local variables do not exist when function call is over which creates problem
4. if &x=y; x will print value of y, and &x will print address of y, *x requires pointer which is not used here so it wont give anything and create error

**Final points about references :**
- Creates an alias/another name
- Internally implemented using constant pointer
- Must be assigned when declared (so doing int &y; int x=10; y=x; is invalid, we must do int x= 10; int &y = x;)
- Can not refer to another location (This means when a reference has been initialized it can not be changed to another location, so it is not like pointer which can be changed to other locations)[Example : if &y=x so y will always refer to x and this cannot be changed]
- cannot be NULL & should be initialized to a proper variable
- When compared to pointers references are :
    - safer to use (bcz pointers if not initialized can refer to any random location that can create problem, where as reference must be initialized so they are safer)
    - easier to use (because unlike pointers where *a refers to value by dereferencing and a refers to address of b, in references a refers to b that is it)


