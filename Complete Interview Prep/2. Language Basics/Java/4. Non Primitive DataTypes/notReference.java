public class notReference {
    public static void main(String args[]){
        int x1 = 10;
        int x2 = x1;
        x2 = 22;
        System.out.println(x1); // 10
        System.out.println(x2); // 22
        //since these 2 are not referenced so both change independently, since they both refer to different locations
    }
}
