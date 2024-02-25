import java.util.*;
class Program352{
public static void main(String [] args){
Scanner sc=new Scanner(System.in);
System.out.println("enter your name:");
String name=sc.nextLine();
System.out.println("Your name is : "+name);
System.out.println("Length of string is : "+name.length());
char str[]=name.toCharArray();
for(int iCnt=0;iCnt<name.length();iCnt++){

System.out.println(str[iCnt]);
}

}
}