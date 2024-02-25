/*
1. Write Java program which accept N numbers from user and return difference between summation of even elements and summation of odd elements.
enter the size of array:
6
enter elements of Array
85
66
3
80
93
88
85
66
3
80
93
88
Summiation:53

*/

import java.util.*;
class ArrayDemo{
 int arr[];
public ArrayDemo(int n){
arr=new int[n];
}
public void Accept(){
Scanner sc=new Scanner (System.in);
System.out.println("enter elements of Array");

for(int iCnt=0;iCnt<arr.length;iCnt++){
 arr[iCnt]=sc.nextInt();

}
}
public void Display(){
for(int iCnt=0;iCnt<arr.length;iCnt++){
System.out.println(arr[iCnt]);


}
}
public int Difference(){
int sum1=0;
int sum2=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt]%2==0){
 sum1=sum1+arr[iCnt];
}
else {
sum2=sum2+arr[iCnt];
}
}


return sum1-sum2;
}

}
public class Assignment34_1{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter the size of array:");
int n=sc.nextInt();
ArrayDemo obj=new ArrayDemo(n);
obj.Accept();
obj.Display();
int iret=obj. Difference();
System.out.println("Summiation:"+iret);
}
}