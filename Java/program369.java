import java.util.*;
class program369{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s+","");
str=str.trim();
System.out.println("Updated string is:"+str);
}
}