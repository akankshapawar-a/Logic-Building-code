import java.util.*;
class program375{
public static void main(String arg[]){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

str=str.replaceAll("\\s"," ");

str=str.trim();

String arr[]=str.split(" ");
 System.out.println("Enter the word that you want to search : ");
 String Word = sc.nextLine();

int iFrequency=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt].equals(Word))
{
iFrequency++;
}
}
System.out.println("Number of words are:"+iFrequency);
}

}