/*
3. Write a java program which accept string from user and return difference between frequency of small characters and frequency of capital characters.
enter the string:
Hello
String:-3
*/

import java.util.*;
class Difference{
public int Capital(String str){
char arr[]=str.toCharArray();
int iCount1=0;
int iCount2=0;

for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='A') && (arr[iCnt]<='Z')){
iCount1++;
}
else if((arr[iCnt]>='a') && (arr[iCnt]<='z')){
iCount2++;
}

}
return iCount1-iCount2;
}
}


public class Assignment33_3{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the string:");
String str=sc.nextLine();
Difference obj=new Difference();
int iret=obj.Capital(str);
System.out.println("String:"+iret);
}
}