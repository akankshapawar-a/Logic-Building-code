/*
5. Write a java program which accept string from user and display it in reverse order.
enter the string:
Hello
olleH
*/

import java.util.*;
class Reverse{
public String Capital(String str){
char arr[]=str.toCharArray();
int start=0;
int end=arr.length-1;;
char temp=' '; 
while(start<end){
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;

start++;
end--;
}
return new String(arr);
}


}


public class Assignment33_5{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the string:");
String str=sc.nextLine();
Reverse obj=new Reverse();
String iret=obj.Capital(str);
System.out.println(iret);
}
}