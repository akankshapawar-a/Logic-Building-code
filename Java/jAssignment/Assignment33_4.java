/*
4. Write a java program which accept string from user ser and check. whether it contains vowels in it or not.enter the string:
marvellous
True
*/

import java.util.*;
class Difference{
public boolean Capital(String str){
char arr[]=str.toCharArray();
int iCount=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt]=='a'||arr[iCnt]=='A' && arr[iCnt]=='e'||arr[iCnt]=='E' && arr[iCnt]=='i'||arr[iCnt]=='I' && arr[iCnt]=='o'||arr[iCnt]=='O' && arr[iCnt]=='u'||arr[iCnt]=='U'){
iCount++;
break;
}

}
if(iCount!=1){
return false;
}
else{
return true;
}
}
}


public class Assignment33_4{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the string:");
String str=sc.nextLine();
Difference obj=new Difference();
boolean iret=obj.Capital(str);

if(iret==true){
System.out.println("True");
}
else{
System.out.println("False");

}

}
}