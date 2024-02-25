import java.util.*;
class program374{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s"," ");

str=str.trim();

String arr[]=str.split(" ");
int iFrequency=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt].equals("india"))
{
iFrequency++;
}
}
System.out.println("Number of words are:"+iFrequency);
}

}