### **Output in Java**
---

Mainly 4 methods to produce output on the screen
1. `System.out.print()`  prints without adding a new line
2. `System.out.println()` prints the statement and adds a new line afterwards
3. `System.out.format()` or 4. `System.out.printf()` (These are just 2 names for same functionality, whereas first 2 are inherently different)

Difference between print() and println V/S format() is that the first two are used to produce strings or numbers or a mixture of these two, and for non-primitive types they are converted to strings first and then printed. and these functions are explicitly written to handle primitives, they have multiple versions some only handle strings while other handle all primitives. format() is particularly used for formatted input, when we have inputs like float,date or time. So format() is mainly useful for formatting numbers.