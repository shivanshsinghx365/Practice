class point{
    int x;
    int y;
}
public class nonprimitive {
    public static void main(String args[]){
        point p = new point();
        p.x=10;
        p.y=20;
        System.out.println(p.x+"  "+p.y); //using plus we can print int as well via concatenating
    }
}