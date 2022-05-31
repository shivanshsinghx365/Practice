**Definition : An array is a collection of elements of the same data type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.**

Arrays are used to store data together that can be accessed by using same identifier but with different indexes

by contiguous we mean if first element is at address 0x2000, and suppose int of size 4 are being stored then, 2nd element will be at 0x2004, third element at 0x2008 and so on

- Note : size of data type is dependent on the compiler
- Note : arrays index values are assigned in the same order as you write if you write {1,2,3} then 0th index is 1, 1st index is 2 and so on

int arr[6]={5,10,20,30,40,50};

name of the array gives you the address of the first element, so if we write cout << arr  we will get 0x2000

#### **Ways of Declaring an array**
- int arr[6]={5,10,20,30,40,50};  //declaration with assigning of values
- int arr[6];    //declaration with no values assigned      //this will automatically get assigned some random values
- int arr[]={10,20,30,40,50,60}; //declaration with skipping size, in this case compiler automatically creates counts how many elements are their in the initialization and then allocates the required memory accordingly

**NOTE : when declaring an array you either need to specify the size of the array or specify the elements to be initialized, this means you can not write "int arr[];" which neither has a size nor a set of initializing values**

value that you pass inside arr[] bracket should be a constant, but in recent c++ versions it can also be a variable like:
int n=6
int arr[n]; //note this is only allowed in later c++ versions and not in earlier versions

in case you want to do something like arr[] in which you first get values and then decide size at run-time the you need to allocate memory dynamically
