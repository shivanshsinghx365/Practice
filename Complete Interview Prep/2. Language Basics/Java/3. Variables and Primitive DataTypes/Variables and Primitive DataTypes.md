### **Variables and Primitive DataTypes**
---

Variables are used to access and store the data in a computer program.
This data can be of various types.
Data types specify the type and range of elements that will be stored at that location, and the amount of memory to be allocated to that variable.


In Java we must specify data type before using it, just like c/c++ and not python
So java is statically typed since it is known at compile time and python is dynamically typed since its memory allocation is decided at runtime

constants in java use keyword final

**Variable Naming in Java :**

* Allowed -
1. Letters a-z, A-Z
2. Underscore_
3. Dollar$
4. Numeric Digits from 2nd place onwards

* Not Allowed - 
1. Numeric digit at 1st position
2. Special Character other than  _ and $
3. Keyword name

Example : 
a, ABC, $r, TRy$, _se, cfe11 are valid
11a, a#, else, do are invalid


**Java Programmers Conventions :** 
1. Use camelCase for variable names (example : presentAge, num, sumOfPayments)
2. Constants are written in UPPER_CASE separated with Underscore (example : final int MAX_AGE = 100; , final int MIN_PLAYERS = 2;)


**Types of variables :**
1. Primitive (int,char,boolean,byte, ....)
2. Non-Primitive (String,Array,User defined data types, ....)

non-Primitive types are objects of some classes, which may be user defined or predefined


**PRIMITIVE DATA TYPES**

boolean    :    true or false (example flag, isValid, isAdult etc) 1 bit
byte       :    -128 to 127 (-2^7 to 2^7 - 1)  (example to store marks of student from 0 to 100) 8 bit
short      :    -32768 to 32767 (-2^15 to 2^15 - 1) 16 bit
int        :    -2147483648 to 214743647 (-2^31 to 2^31 - 1) 32 bit
long       :    (-2^63 to 2^63 - 1)       64bit
float      :    Single Precision 32 bit (example for measuring eight, height, cash, etc)
double     :    Double Precision 64 bit
char       :    16 Bit Unicode characters ('\u0000' to '\uffff'), in c/c++ chars are 8 bits, the idea is allow for unicode characters, to support characters other than english too. IT is not signed so range from (0 to 2^16 -1)

Note : 1 bit is for sign and rest 7, 15 & 31 bits in byte,short and int respectively are used to store values
Internally signed variables in java use 2's complement representation to represent negative numbers nd positives are used as it is

Big integer class can be used to store even more larger  numbers

the values that we write on the right side are called literals. 