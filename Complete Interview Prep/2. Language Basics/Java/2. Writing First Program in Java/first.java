// Java Hello World Program
// comment syntax in java is same as c/c++

public class first{  //this line creates a class
    //NOTE : public class name must match the file name. Inner, non public, class names may differ.
    //In java every code we write has to be part of a class, however in python & C++ we can write code without class also
    //so c++ & Python program can be just collection of function , however in java its always collection of classes 
    
    /*This is the main function
     * This is where execution of a Java Program Begins*/
    public static void main(String args[]){
        //public is access specifier, we do this so main is accessible from everywhere, especially when JVM needs to run this program outside the class, without public it might compile fine but it may not run fine
        //static methods can be called without creating an object, so main is always static because JVM does not want to create a main class to run this main function, it just want to call the main method
        //void is return type and is fixed for java, just like we have void and int for c and int for c++
        //(String args[]) is an array of strings which are an argument to the main function
        //when main runs it can have arguments and Java decided for them to be strings, so that we can pass a string set command line
        //So when we run this program we can specify some special parameters to this application
        //typically we do not use this array
        //args[] is just a name and we can call it anything

        System.out.println("Hello, World!"); //Prints hello world to screen
        //here System is a class, a standard java class
        //out is an object inside this class
        //out is an object of print stream which is used for printing something to the screen, standard output device
        //println is a method in the print stream class, so we call it on the out object
        //println adds a newline character after the string is printed

    }

}

/*
 * Running The code
 * javac Test.java    //this is to compile test.java and create a byte code
 * //this creates a new file in the same directory with name test.class, which is a bytecode file
 * java Test    //this command runs the bytecode via JVM, and we get output
 * NOTE : Before running java program the class path must be set appropriately, or else you can use console to change folder to current folder
 */