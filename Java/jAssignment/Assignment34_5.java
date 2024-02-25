/*
5. Write Java program which accept N numbers from user and display all such elements which are multiples of 11.
enter element in array:
6
enter element in array:
85 66 3 55 93 88
85
66
3
55
93
88
Number Multiply by 11:66 55 88

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
public void Divisiblity(){
int iCnt=0;
System.out.print("Number Multiply by 11:");
for(iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]%11==0)){
System.out.print(arr[iCnt]);
}

}
}

}
public class Assignment34_5{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter element in array:");
int n=sc.nextInt();
Arrayx obj=new Arrayx(n);
obj.Accept();


obj.Display();
obj.Divisiblity();
//System.out.println("No Divisible by 5:"+);

}

}