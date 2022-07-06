public class NotSame {
    public static void main(String args[]){
        Integer x1=400,x2=400;
        if(x1==x2){
            System.out.println("Same");
        } else {
            System.out.println("Not Same");
        }
    }
}

/*
 * OUTPUT :
 * Not Same, since Wrapper classes are referenced and they reference/object to two different locations that just happen to have same value, so these references are not actually same
 * We would have got same if these two were primitive types
 */