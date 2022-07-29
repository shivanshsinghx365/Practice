public class operator{
    public static void main(String[] args){

        int x=10,y=20;
        System.out.println(x+y); //30
        System.out.println(x-y); //-10
        System.out.println(x*y); //200
        System.out.println(y/x); //2

        int z = (x+y*10);
        System.out.println(z);

        z=x++;
        System.out.println(z+" "+x);
        z=++x;
        System.out.println(z+" "+x);
        
    }
}