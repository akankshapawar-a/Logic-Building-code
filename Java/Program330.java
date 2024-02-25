
import java.util.*;

class Number{
public int Factorial(int iValue)
{
int Mul=1;
for(int iCnt=1;iCnt<=iValue;iCnt++){
Mul=Mul*iCnt;
}
return Mul;
}

}

class Program330{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Number obj=new Number();
int iRet=0;
iRet=obj.Factorial(no);
System.out.println("Factorial is : "+iRet);

}
}