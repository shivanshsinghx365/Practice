public class dataType {
    public static void main(String[] args) {
        //primitive data types store only simple values
        //non-primitive/reference type are used to store complex values
        //byte - 1 byte in size, stores number from [-128 to 127]
        //short - 2
        //int - 4      12
        //long - 8     456123799
        //float - 4    3.14
        //double - 8 
        //char - 2,  a,b,c,d
        //boolean - 1, true false
        byte age = 30;
        int phone = 1234567890; //will give error if size is longer than capacity of int for example 11 digit number or greater
        long bigPhone = 12345678900L; //We placed L so that java knows that we are not storing a normal integer and rather a Long type
        float pi = 3.14F; //whenever we write numbers other than integer we need to specify them again the number by adding F or L or whatever it maybe at the end
        char letter = '@';
        boolean isAdult = true;
        System.out.println(age+" "+phone+" "+bigPhone+" "+pi+" "+letter+" "+isAdult);

        //Non-primitive/Reference type
        //these also have some functions of their own
        //Also in primitive types size is fixed, but not in non-primitive type
        //non primitive types are declared using new keyword, however this is not compulsory in String
        String name = "Shivansh";
        System.out.println(name+" "+name.length());

        //New Keyword
        //it is used to create objects of a class
        String name2 = new String("Apu");
        System.out.println(name2);
    }
}
