/*
2. Write a java program which accept string from user and count number of small characters.
enter the string:
Hello
String:4

*/
import java.util.*;
class SmallLetter{
public int Capital(String str){
char arr[]=str.toCharArray();
int iCount=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='a') && (arr[iCnt]<='z')){
iCount++;
}
}
return iCount;
}
}


public class Assignment33_2{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the string:");
String str=sc.nextLine();
SmallLetter obj=new SmallLetter();
int iret=obj.Capital(str);
System.out.println("String:"+iret);
}
}