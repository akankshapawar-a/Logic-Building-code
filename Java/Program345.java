//Array element form user
import java.util.*;


 class ArrayX{
int Arr[];
public ArrayX(int n){
Arr=new int[n];
}

public void Accept(){
Scanner sc=new Scanner(System.in);
System.out.println("enter elements of Array");
for( int iCnt=0;iCnt<Arr.length;iCnt++){
Arr[iCnt]=sc.nextInt();

}

}

public void Display(){
System.out.println(" elements of Array");
for(int iCnt=0;iCnt<Arr.length;iCnt++){
System.out.println(Arr[iCnt]);
}
}
}

class Program345{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter size of Array");
int n=sc.nextInt();
ArrayX obj=new ArrayX(n);
obj.Accept();
obj.Display();
}
}