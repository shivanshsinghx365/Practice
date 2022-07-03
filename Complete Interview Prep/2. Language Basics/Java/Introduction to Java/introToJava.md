### **Introduction to Java**
---

Java is a high-level, class-based, object-oriented programming language that is designed to have as few implementation dependencies as possible.
Introduced in 1995, one of the most popular language for decades.
Creator : James Gosling
For : Sun Microsystems, Inc.


- **Platform Independent**

A platform is a combination of OS & Architecture we are using.
Windows+Intel, Linux+Intel, Windows+AMD, etc.
Before Java we used to compile for each platform using the compiler, and it used to create an executable, that could run on that particular platform only, it can not be used elsewhere.

However, in Java When we compile it creates an intermediate code called "Java Byte Code".
This byte code can run on any platform which has that platform's JVM(Java Virtual Machine) pre-installed

JVM is a machine specific software which is responsible for running java byte code on that machine, by converting the general java byte code into machine specific instructions.

Java is "Write Once, Run Anywhere" (WORA) Programming language.
Java introduced platform independence

Java has a simple compilation and complex running process, on the other hand C/C++ have complex compilation and running part is simple.

Many modern language follow this idea, example : python, C#

- **Popular**

3 Billion Devices, 9 Million Developers, Language of Android

- **Simple**

Java is simpler compared to C/C++
because it does not have concept of pointers & operator overloading, also in C/C++ we can do the same thing in multiple ways making it more complex (Example in C/C++ non-primitive data can be passed via reference, pointers and even value, but in java they are only passed by references & primitives are normal objects and are passed by values)
So java has simpler rules and implementation of many things.

- **Secure**

in C/C++ the code created by compiler is run without any monitoring. In java the byte code is run by JVM which also monitors it. It makes sure that unsecure things are not ran on machines.
Also Java has no pointers there is no way to directly access memory and can only use references, therefore making it more secure

- **Statically Typed**

Similar to C/C++, different from python which is dynamically typed
just like in c/c++ if we need to use a variable we must declare it first.
pros : since type need not be decided at runtime, statically typed programs are generally faster
cons : dynamic typing is easier since we don't have to worry about declaration or data types

- **Other Advantages**
1. automatic garbage collection : We as programmers need not worry about de-allocating the dynamically allocated memory
2. index out of bound checking : checks if we went beyond the boundaries of an array, and we get an exception
3. better exception handling
4. better multi-threading 
5. Java prevents us from writing bad code : during compilation itself, it forces us to write a more maintainable and efficient code, this is why it is language of "Industries" & "software Developers" rather than language of students.