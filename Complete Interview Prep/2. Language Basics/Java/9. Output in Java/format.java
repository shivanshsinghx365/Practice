public class format {
    public static void main(String args[]){
        int x=100;
        System.out.format("Value of x is %d \n", x);
        double y= Math.PI;
        System.out.println(y);
        System.out.format("Value of PI = %.4f\n",y);   // 4 digit precision
        System.out.format("Value of PI = %5.2f\n",y);   //5 minimum characters, with 2 precision, remaining are filled with spaces
        System.out.format("Value of PI = %05.2f\n",y);  //do not fill remaining with spaces, but with 0s
        System.out.printf("x=%d y=%f\n",x,y);
    }   
}

/*
Value of x is 100 
3.141592653589793
Value of PI = 3.1416
Value of PI =  3.14
Value of PI = 03.14
x=100 y=3.141593
 */