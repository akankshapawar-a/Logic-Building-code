import java.util.*;
class Digit{
public int SumDigit(int iValue){
int iSum=0;
int iDigit=0;
if(iValue<0){
iValue=-iValue;
}

while(iValue>=10){
while(iValue!=0){
iDigit=iValue%10;
iSum=iSum+(iValue%10);
iValue=iValue/10;
}
if(iSum>=10){
iValue=iSum;
iSum=0;
}
else{
iValue=iSum;
break;
}
}

return iValue;
}
}

class Program340{

public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Digit obj=new Digit();
int iRet=obj.SumDigit(no);
System.out.println("Count of Digit:"+iRet);


}
}