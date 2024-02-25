//Array element form user
import java.util.*;


class ArrayX{
protected int Arr[];
public ArrayX(int n){
Arr=new int[n];
}

protected void Accept(){
Scanner sc=new Scanner(System.in);
System.out.println("enter elements of Array");
for( int iCnt=0;iCnt<Arr.length;iCnt++){
Arr[iCnt]=sc.nextInt();
}

}

protected void Display(){
System.out.println(" elements of Array");
for(int iCnt=0;iCnt<Arr.length;iCnt++){
System.out.println(Arr[iCnt]);
}
}
}

class MyArray extends ArrayX{

public MyArray(int n){
super(n);
}
public int Summation(){
int iSum=0;
for(int iCnt=0;iCnt<Arr.length;iCnt++){
iSum=iSum+Arr[iCnt];
}
return iSum;
}

}

public class Program348{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter size of Array");
int n=sc.nextInt();
MyArray obj=new MyArray(n);
obj.Accept();
obj.Display();
System.out.println(obj.Summation());
}
}