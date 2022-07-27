### **Wrapper Class**
---

Java allows us to have non-primitive types for each of the primitive types. 

**Primitive types :** char,byte,short,int,long,float,double,boolean
**Wrapper Class :** Character,Byte,Short,Integer,Long,Float,Double,Boolean

Example :
`int x1=10;   //primitive`
`Integer x = new Integer(10);  //wrapper class, non-primitive reference`

Naming convention for Java Classes is that they begin with capital letters

In Java we have some primitive types and some non-primitive types so implementation is not as clean as python where every data type is referenced. When we are working with OOPS, we like to deal with objects only that is why we have Wrapper classes.

Generics : In generics we can pass data type as an argument and we can create objects of a particular data type.

Entire Java collections framework where we have efficient implementation of algorithms are generics based, and expect a data type as an argument.

Therefore java collections and java's generics do not work for primitive types, because they expect a class objects

Therefore we need wrapper class

The reason java still has primitive types is bcz it inherited from c/c++, and apart from this primitive types are also more efficient, since oops causes implementation overhead.