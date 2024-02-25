import java.util.*;
class Program351{
public static void main(String [] args){
Scanner sc=new Scanner(System.in);
System.out.println("enter your name:");
String name=sc.nextLine();
System.out.println("Your name is : "+name);
System.out.println("Length of string is : "+name.length());

for(int iCnt=0;iCnt<name.length();iCnt++){

System.out.println(name.charAt(iCnt));
}
}
}