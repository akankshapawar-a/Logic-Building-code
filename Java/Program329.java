
import java.util.*;
class Program329{

public static int Factorial(int iValue)
{
int Mul=1;
for(int iCnt=1;iCnt<=iValue;iCnt++){
Mul=Mul*iCnt;
}
return Mul;


}

public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
int iRet=0;
iRet=Factorial(no);
        System.out.println("Factorial is : "+iRet);

}
}