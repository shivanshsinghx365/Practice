//NOTE : JAVA STRINGS ARE IMMUTABLE, so if you want to make changes you have to store those changes in another variable

public class Strings {
    public static void main(String[] args) {
        //Concatenate to add 2 stings
        String name1 = "Shivansh";
        String name2 = "Singh";
        String name3 = name1+" "+name2;
        System.out.println(name3);

        //charAt checks which character is present at a given position
        System.out.println(name1.charAt(0)); //Java is a zero index based languages

        //length finds length of the string
        System.out.println(name1.length());

        //replace - used to replace one character of a string with another
        //note this does not affect the original string
        System.out.println(name1.replace("h","X")); //We could have also stored this value in a new string and then printed it
        System.out.println(name1);

        //substring -  used to get a part of a string
        System.out.println(name1.substring(0,4)); //just like python last index is not printed so its printed from start till last-1
        System.out.println(name1.substring(4, 8)); // note this an't go beyond size of string so i can't write last index randomly as 20 for example



    }
}