### **Type Conversion in Java**
---

* Widening/Implicit Conversion : 
byte -> short -> int -> long -> float -> double
char -> int -> long -> float -> double

this is called a widening conversion because the range of values we can store in each data type is more than the previous one, and happens automatically without any issue, we might loose precision but conversion happens without any hiccup

* Narrowing/Explicit Conversion : 
here chances of loss of data is more, but it is still allowed, but this will not happen implicitly, we need to explicitly do it.
here we need to specify the conversion otherwise we get error.
The reason we do it explicitly so that the programmer knows that there will be loss of data and he/she can proceed if they still choose to do so

Example : 
double d = 12.3;
int a = d; //this will raise error since the compiler will not convert it on its own/implicitly
int b = (int)d; //this will work fine since we have explicitly converted it

NOTE : both conversions are allowed in primitive data, but in cases of classes only implicit conversion is allowed (so child class dog's element can be converted to its parent class animal but not vice-versa)