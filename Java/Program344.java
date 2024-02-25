//Array element form user
import java.util.*;
class Program344{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter size of array");
int n=sc.nextInt();
int []arr=new int [n];
int iCnt=0;
System.out.println("enter elements of array");
for( iCnt=0;iCnt<n;iCnt++){
arr[iCnt]=sc.nextInt();
}
System.out.println(" elements of array");

for(iCnt=0;iCnt<n;iCnt++){
System.out.println(arr[iCnt]);

}

sc.close();
}
}