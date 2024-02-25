import java.util.*;
class program377{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

StringBuffer sobj=new StringBuffer(str);

sobj=sobj.reverse();

System.out.println(sobj);


}
}