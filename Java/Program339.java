import java.util.*;
class Digit{
public int SumDigit(int iValue){
int iSum=0;
if(iValue<0){
iValue=-iValue;
}
while(iValue!=0){
iSum=iSum+(iValue%10);
iValue=iValue/10;
}
return iSum;
}

}


class Program339{

public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Digit obj=new Digit();
int iRet=obj.SumDigit(no);
System.out.println("Count of Digit:"+iRet);


}
}