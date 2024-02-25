import java.util.*;

class StringX
{
public String RemoveSpace(String str){
return str.replaceAll("\\s","");
}
}

class program362
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
String iret=obj.RemoveSpace(name);
System.out.println("Result is : "+iret);

       
    }
}