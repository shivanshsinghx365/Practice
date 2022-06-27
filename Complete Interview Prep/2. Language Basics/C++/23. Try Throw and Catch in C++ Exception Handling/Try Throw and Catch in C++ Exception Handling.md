### **Try Throw and Catch in C++ Exception Handling**
---

Whenever we have a code where we feel that it might cause an unusual condition we place it in the try block

`try{                    `
`    //The code that may `
`    //throw exception   `
`}                       `

**throw :** it is used to throw an exception. After throw keyword we write a variable which can be of any data type, this variable will hold the information related to this exception

**catch :** it is a block of code and it is used after the try block, this catch block contains the code that is used to handle the exceptions. Multiple catch blocks can be there, bcz we might have a code inside try block that can throw various types of exceptions. So we will need multiple catch blocks to deal with all of these exceptions.
The data type caught by catch is same as the one thrown by try

*Note: division by zero is not the best example since it can also be handled with a if-else but it is the simplest example hence it is used.*

**NOTE :** If you throw an exception that is not catched then program will crash

- We can also use throw with function declaration, in such a case it tells what all exceptions can be thrown by that function, but its no longer allowed now in C++ 17 onwards