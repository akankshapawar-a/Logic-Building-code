/*
1. Write java program which accept N numbers from user and accept one another number as NO, check whether NO is present or not.
enter element in array:
6
enter the element you want to search:
66
enter element in array:
85 66 3 66 93 88
85
66
3
66
93
88
Number Divisible by 5:True

enter element in array:
6
enter the element you want to search:
12
enter element in array:
85 11 3 15 11 111
85
11
3
15
11
111
Number Divisible by 5:False
*/

import java.util.*;

class Arrayx{
int arr[];
Arrayx(int n){
arr=new int [n];
}

public void Accept(){
Scanner sc=new Scanner(System.in);
System.out.println("enter element in array:");
int iCnt=0;
for( iCnt=0;iCnt<arr.length;iCnt++){
arr[iCnt]=sc.nextInt();
}

}
public void Display(){
for(int iCnt=0;iCnt<arr.length;iCnt++){
System.out.println(arr[iCnt]);
}
}
public boolean check(int ino){
int iCnt=0;
int iCount=0;
System.out.print("Number Divisible by 5:");
for(iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt]==ino){
iCount++;
break;
}

}
if(iCount>=1){
return true;
}
else{
return false;
}
}

}
public class Assignment36_1{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("enter element in array:");
int n=sc.nextInt();
System.out.println("enter the element you want to search:");
int no=sc.nextInt();
Arrayx obj=new Arrayx(n);
obj.Accept();


obj.Display();
boolean ires=obj.check(no);
if(ires==true){
System.out.println("True");
}
else{
System.out.println("False");

}

}

}