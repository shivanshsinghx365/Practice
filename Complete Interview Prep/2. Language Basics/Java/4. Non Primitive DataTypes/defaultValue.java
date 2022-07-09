class point{
    int x;
    int y;
}
public class defaultValue {
    public static void main(String args[]){
        point p1 = new point();
        System.out.println(p1.x); //0 since default values are assigned, since they weren't initialized
        System.out.println(p1.y); //0
        //int x;
        //System.out.println(x); //COMPILER ERROR : The local variable x may not have been initialized
    }
}