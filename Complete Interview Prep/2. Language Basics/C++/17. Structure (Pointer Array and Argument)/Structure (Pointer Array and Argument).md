**Structure Pointers :**
these point to a structure
they are declared in same way as normal pointers `data/struct_type *ptr = &variable`
in c you also need to write struct before it
arrow operator is used to access the members instead of . operator or * operator,
`ptr->x` is used to access x

**Array of Structures :**
`structName arr[n]` creates an array of n elements of struct type
`arr[i]` gives a particular element and members a are accessed as `arr[1].x`
just like normal variables whose value can be assigned to a variable of same data type
we can do, `point p = arr[3]; cout<<p.x`

**Passing Structures as arguments to functions**
just like basic data types you write the function as
`returnType function_name(structName s)` or `void print(point p)`
by default they will be passed via their copies/by value
this creates extra overhead if structure  or its elements are too big
and just as we did before we pass these via pointers or references to get rid of these issues
but also remember this will allow us to change the original values from within the function, and to avoid that from happening we can put a const keyword