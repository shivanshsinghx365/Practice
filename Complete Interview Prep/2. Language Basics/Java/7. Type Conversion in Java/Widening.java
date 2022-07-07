import java.security.PublicKey;

public class Widening{
    public static void main(String args[]){
        int x = 100;
        float y = x;
        float z = y;
        System.out.println(x);
        System.out.println(y);
        System.out.println(z);
    }
}

/*
 * OUTPUT
 * 100
 * 100.0
 * 100.0
 */