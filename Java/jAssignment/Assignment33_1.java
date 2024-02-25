/*
1.Write a Java program which accept string from user and count number of capital characters.
enter the string:
Hello
String:1
*/

import java.util.*;
class CapitalLetter{
public int Capital(String str){
char arr[]=str.toCharArray();
int iCount=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='A') && (arr[iCnt]<='Z')){
iCount++;
}
}
return iCount;
}
}


public class Assignment33_1{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the string:");
String str=sc.nextLine();
CapitalLetter obj=new CapitalLetter();
int iret=obj.Capital(str);
System.out.println("String:"+iret);
}
}