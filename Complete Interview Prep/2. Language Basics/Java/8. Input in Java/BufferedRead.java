import java.io.*;

public class BufferedRead{
    public static void main(String args[]) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter a string : ");
        String s = br.readLine();
        System.out.println("You Entered "+s);
    }
}