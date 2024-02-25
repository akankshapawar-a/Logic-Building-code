/*
2. Write java program which accept N numbers from user and accept one another number as NO, return index of first occurrence of that INO.
enter element in array:
6
enter the element you want to search:
66
enter element in array:
85 66 2 3 44 66 5 44 33 22 1  1 3 4 4
85
66
2
3
44
66
First Occurance:1

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
public int FirstOcc(int ino){
int iCnt=0;

int iPos=0;

for(iCnt=0;iCnt<arr.length;iCnt++){

if(arr[iCnt]==ino){
iPos=iCnt;

break;
}
}
return iPos;
}

}
public class Assignment36_2{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("enter element in array:");
int n=sc.nextInt();
System.out.println("enter the element you want to search:");
int no=sc.nextInt();
Arrayx obj=new Arrayx(n);
obj.Accept();


obj.Display();
int ires=obj.FirstOcc(no);
System.out.println("First Occurance:"+ires);


}

}