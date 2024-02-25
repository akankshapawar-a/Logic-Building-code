import java.util.*;
class program368{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s+","");

System.out.println("Updated string is:"+str);
}
}