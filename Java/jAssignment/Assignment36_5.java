/*
5. Write java program which accept N numbers from user and return product of all odd elements.
enter element in array:
6
enter element in array:
15 66 3 70 10 88
15
66
3
70
10
88
45
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
public int oddproduct(){
int iCnt=0;
int pro=1;
for(iCnt=0;iCnt<arr.length;iCnt++){

if(arr[iCnt]%2!=0){

pro=pro*arr[iCnt];
}
}
return pro;
}

}
public class Assignment36_5{
public static void main(String []args){
Scanner sc=new Scanner(System.in);

System.out.println("enter element in array:");
int n=sc.nextInt();
Arrayx obj=new Arrayx(n);
obj.Accept();
obj.Display();
 int ires=obj.oddproduct();
System.out.println(ires);



}

}