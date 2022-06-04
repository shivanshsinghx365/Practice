import java.util.Arrays; //This is used to import/include packages in java

public class arrays {
    public static void main(String[] args) {
        //Just as in strings if we already know what we have to store in Arrays we don't need a new keyword we can directly use them with equal sign
        //as down with marks here

        /*int age = 19;
         int physics = 97;
         int maths = 98;
         int bio = 99;          
        */
        //Arrays are lists of any data type
        int[] marks = {97,98,99,100,95};
        System.out.println(marks[1]);
        // if we try to print marks/Array directly we won't get the expected result
        // because in java if we try to print array directly then we get a jargon composed of hash code and class name

        int[] mark = new int[3];
        mark[0]=77;
        mark[1]=75;
        System.out.println(mark[2]); //positions which are still not defined in partially declared array get 0
        
        int[] markY = new int[3];
        System.out.println(markY[2]); //even initiated array gives 0 at least here

        //NOTE : unlike C++ which assigns garbage value to uninitialized variables, Java gives null values to uninitialized variables
        //so if there is uninitialized int then you get 0 and if its a boolean you get false

        //length
        System.out.println(markY.length); //we don't need function brackets() since this is not a function but a property of the array itself
        //this prints length
        //if you try to print length of completely uninitialized array then you get an error and not 0

        //System.out.println(); on its own prints an empty line

        //sort
        //Arrays is the class of arrays and has the function sort inside it
        //by default it sorts in ascending order
        //by convention names of classes in java start with upper case
        System.out.println(marks[0]+" "+marks[1]+" "+marks[2]+" "+marks[3]+" "+marks[4]+" ");
        Arrays.sort(marks); // to use this we must include java.utils.arrays first
        System.out.println(marks[0]+" "+marks[1]+" "+marks[2]+" "+marks[3]+" "+marks[4]+" ");
        // Note : the array is mutable and gets sorted after using sort() function

    }
}