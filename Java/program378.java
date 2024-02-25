import java.util.*;
class program378{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s"," ");

str=str.trim();

String arr[]=str.split(" ");

StringBuffer output=new StringBuffer();
for(String s:arr){
StringBuffer word=new StringBuffer(s);
output.append((word.reverse()).append(" "));
}



System.out.println("Result:"+output);
}

}