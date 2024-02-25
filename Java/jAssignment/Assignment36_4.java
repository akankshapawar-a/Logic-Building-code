/*
4. Write java program which accept N numbers from user and accept Range, Display all elements from that range
enter element in array:
6
enter element in array:
85 66 3 76 93 88
85
66
3
76
93
88
Enter the start value of the range:
60
Enter the end value of the range:
90

85
66
76
88
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
public void Range(int start,int end){
int iCnt=0;

for(iCnt=0;iCnt<arr.length;iCnt++){

if(arr[iCnt]>start && arr[iCnt]<end){
 System.out.println(arr[iCnt]);

}
}

}

}
public class Assignment36_4{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("enter element in array:");
int n=sc.nextInt();
Arrayx obj=new Arrayx(n);
obj.Accept();
obj.Display();
System.out.println("Enter the start value of the range:");
    int start = sc.nextInt();
    System.out.println("Enter the end value of the range:");
    int end = sc.nextInt();
    obj.Range(start, end);




}

}