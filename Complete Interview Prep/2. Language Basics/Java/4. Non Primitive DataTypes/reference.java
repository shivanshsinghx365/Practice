class point{
    int x;
    int y;
}
public class reference {
    public static void main(String args[]){
        point p1 = new point();
        p1.x = 10;
        p1.y = 20;

        point p2=p1; //this creates a reference p2 pointing to p1, so changing any changes other
        p2.x=55;
        System.out.println(p1.x+"   "+p1.y);
        System.out.println(p2.x+"   "+p2.y);
    }
}