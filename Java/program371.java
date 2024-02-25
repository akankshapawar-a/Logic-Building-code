import java.util.*;
class program371{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("Enter String:");
String str=sc.nextLine();

if(str.length() ==0){
System.out.println("Number of Words are :0");
return ;
}
str=str.replaceAll("\\s+","");
str=str.trim();

int iFrequency=0;
for(int iCnt=0; iCnt<str.length();iCnt++){
if(str.charAt(iCnt)==' '){
iFrequency++;
}
}
System.out.println("Number of words are : "+(iFrequency+1));
}
}