import java.util.*;
class Digit{
public int SumDigit(int iValue){
int iDigit=0;
int iSum=0;
while(iValue!=0){
iDigit=iValue%10;
iSum=iSum+iDigit;
iValue=iValue/10;
}
return iSum;
}

}


class Program338{

public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Digit obj=new Digit();
int iRet=obj.SumDigit(no);
System.out.println("Count of Digit:"+iRet);


}
}