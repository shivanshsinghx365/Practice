public class arguments{
    public static void main(String[]  args){ //args is an array of strings, so whatever we pass is taken as an array of strings, even if you pass integer 123, it is stored as string
        if(args.length>0){
            System.out.println("Arguments are ");
            for(String x: args)
                System.out.print(x+" ");
        }
        else{
            System.out.println("No Arguments");
        }
    }
}

/*OUTPUT 1
 * No arguments
*/

/*OUTPUT 2
 * abc 124
*/