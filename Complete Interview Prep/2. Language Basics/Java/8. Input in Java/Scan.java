import java.util.Scanner;
public class Scan {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        System.out.println("String = "+s);
        int x = sc.nextInt();
        System.out.println("Int = "+x);
        float f = sc.nextFloat();
        System.out.println("Float = "+f);
        sc.close(); //Closes our scanner, this prevents memory leak
        //but if it is linked to system.in then remember it closes the stream as well so, preferably
        //close only scanners that are not linked to system.in, if you do not want to close the stream
    }
}