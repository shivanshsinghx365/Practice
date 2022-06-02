**Definition : An array is a collection of elements of the same data type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.**

Arrays are used to store data together that can be accessed by using same identifier but with different indexes

Arrays are contained within Curly braces {}

by contiguous we mean if first element is at address 0x2000, and suppose int of size 4 are being stored then, 2nd element will be at 0x2004, third element at 0x2008 and so on

- Note : size of data type is dependent on the compiler
- Note : arrays index values are assigned in the same order as you write if you write {1,2,3} then 0th index is 1, 1st index is 2 and so on

`int arr[6]={5,10,20,30,40,50};`

name of the array gives you the address of the first element, so if we write cout << arr  we will get 0x2000

#### **Ways of Declaring an array**
- int arr[6]={5,10,20,30,40,50};  //declaration with assigning of values
- int arr[6];    //declaration with no values assigned      //this will automatically get assigned some random values
- int arr[]={10,20,30,40,50,60}; //declaration with skipping size, in this case compiler automatically creates counts how many elements are their in the initialization and then allocates the required memory accordingly

**NOTE : when declaring an array you either need to specify the size of the array or specify the elements to be initialized, this means you can not write "int arr[];" which neither has a size nor a set of initializing values**

value that you pass inside arr[] bracket should be a constant, but in recent c++ versions it can also be a variable like:

int n=6
`int arr[n];` //note this is only allowed in later c++ versions and not in earlier versions

in case you want to do something like arr[] in which you first get values and then decide size at run-time the you need to allocate memory dynamically

Uninitialized arrays element get random values, however partially initialized arrays get standard values like 0 or ''

**NOTE** :: Unlike Python or Java, C++ does not do "Array Index out of bound checking" its the programmers responsibility to deal with it

out of bound is the condition where we try to access an element outside the range of array for example trying to access index 7 in a array which is 3 elements long

ISSUES due to out of bound : 
    - we may get some random results
    - we may get segmentation fault if we don't have permission to access the location we tried to access
    - we might get run time errors due to permission issues or random values

**IMPORTANT_NOTE :** Even though C++ doesn't check for out of bound while accessing arrays, while declaring array you can not provide more elements than the size of array, meaning : 

` arr[2]={0,2} we can access arr[3] without error `

` However, we can not do arr[2]={0,1,2,3}, this will give us compiler error "too many items to initialize an array" `

So while declaring array make sure to give number of elements less than or equal to size of array and never more, else you get error

Property of partially initialized array to give 0 to other default values is used a lot by programmers to initialize the whole array

Size of array = (size of one element) * (number of elements in the array)

Size of array gives us the total number of bytes required to store that array on that machine

`Number of elements = (total size of the array) / (size of individual elements(arr[0]))`

*NOTE :* never use sizeof operator for an array received as an argument by a function. If we do so we might not get correct answer. Reason for this is because arrays are always passed as pointers when passed to a function. However in normal usage they are used as arrays and not as pointers

### Advantages Of Array over other Data Structures:
1. Random Access, since array elements are stored at contiguous locations they allow us to have random access of any location/index i. By random access we mean that since we(compiler) know the size of array, size of datatype stored and address of first element, it can access elements at other indexes very quickly (since it needs just 2 operations one multiplication of index and size of data type and one addition of this value with address of first index)
2. Cache Friendliness, since elements are stored at contiguous locations, its easier for the processor to cache them beforehand while traversing an array, this makes arrays access be very fast compared to other data structures like linked lists where each element is at different location

### Limitations of Arrays
1. We need to know their size before creation. Because if we give it less size then we are unable to accommodate everything and get error, and if we allocate too much space then we are just wasting our resources
    *Solution :* To overcome this problem most programming languages have dynamic sized arrays like Java has ArrayList and C++ has Vectors. Vectors are much more superior to normal arrays and it is strongly recommended to use vectors over arrays wherever possible, because their built in functions to do a lot of things which save time, they are dynamic in size so we don't need to give them a size and just push as many elements we want to an empty vector
2. Insertion and Deletion is slow


Elements in a **vector** are *stored in contiguous locations* just like arrays. It *automatically* takes care of *resizing*. Can be *accessed using indexes* like arrays.
Better way to *access vector elements is by using a "for each" loop*
We could also *access them through iterators* but for that we need to have knowledge of pointers

Syntax of creating vectors:
- Empty vectors `vector<int> v;`
- Vector of size n with each element 5 `vector<int>v(n,5);` , here the 1st parameter is size and 2nd is value of each element
- like arrays `vector<int>v{10,20,30,40,50};`

Arrays can have any number of dimensions as long as a particular compiler supports it, however we generally don't need arrays beyond 2 dimensions.

In a multi dimensional arrays elements are filled in contiguous locations row by row.
This particular storage is called "row-major order"