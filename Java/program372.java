import java.util.*;
class program372{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s"," ");

str=str.trim();

String arr[]=str.split(" ");
System.out.println("Number of words are:"+arr.length);
}

}