import java.util.*;

class Number{
public int EvenFact(int iValue)
{
int Mul=1;
for(int iCnt=2;iCnt<=iValue;iCnt+=2){
if((iValue%iCnt==0)){

Mul=Mul*iCnt;

}
}
if(Mul==1){
return 0;
}
return Mul;
}

}

class Program335{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Number obj=new Number();
int iRet=0;
iRet=obj.EvenFact(no);
System.out.println("EvenFact is : "+iRet);

}
}