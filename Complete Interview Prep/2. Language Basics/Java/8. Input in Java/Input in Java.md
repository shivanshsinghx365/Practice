### **Input in Java**
---

there are mainly 2 ways to read input
- Buffered Reader
- Scanner

**Buffered Reader**
Buffered reader is a simple class which is used to read a character or a sequence of characters
it has three functions which read character, array of characters and line respectively

it is a part of java.io

System.in is an input stream that gives us a string of bytes.
InputStreamReader converts this string of bytes to a string of characters (char is 2 byte in java).
BufferedReader expects a string of characters to read data from

parseInt parses a string and converts it to integer

Buffered Reader throws a "Checked Exception"

Exceptions are some unwanted conditions that happen at runtime and we must write code to handle those conditions

Buffered Reader throws an IOException that is why we specified that in the declaration of main itself

import is a keyword which is used for using library classes or other classes which are not part of our file

`*` after import indicated that we want to import all classes from the IO package

Packages in Java Are a Way to organize ou software. 

Classes contain related functions
Packages contain related classes

packages in java also define file structure java.io.* means there is java folder which has io folder which inturn has classes defined inside it.

Class Path Variable contains roots of all the directories and inside these directories we have packages which also define the folder structure, therefore these imported packages must also be a part of the class path.


**Scanner**
Scanner is easier to use

We don't have to catch any exception so we don't need to write throw statement

Also the syntax is simpler

Scanner is a part of java.utils

Scanner is an advance method to reading input from users and was added in later versions of java.
scanner can read formatted input, it also has different functions to read int,char & other basic data types

Added to simplify the input process

**Buffered Reader V/S Scanner**
Buffered Reader is a very basic way to read input and is mainly used to read the character stream, but the advantage is that is faster than scanner because scanner does lots of post processing for parsing the input.

Buffered Reader is more flexible(we can specify the buffer size that we want to read at a time)

in general/by default buffered reader has larger buffer for reading data compared to scanner

All these above advantages of Buffered reader are only applicable if input is large, but in general scanner class serves the purpose for reading it, and doing it in a simpler manner

another advantage of buffered reader is that it is synchronized so it is better for multi-threading