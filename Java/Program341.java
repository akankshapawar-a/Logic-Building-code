import java.util.*;
class Digit{
public boolean CheckArmStrongs(int iNo){
int iTemp=iNo;
int iCount=0;
while(iTemp!=0){
iCount++;
iTemp=iTemp/10;
}
iTemp=iNo;
int iSum=0,iPower=1,iCnt=0,iDigit=0;
while(iNo!=0){
iDigit=iNo%10;
for(iCnt=1;iCnt<=iCount;iCnt++){
iPower=iPower*iDigit;
}
iSum=iSum+iPower;
iPower=1;
iNo=iNo/10;
}
if(iSum==iTemp){
return true;
}
else{
return false;
}
}
}

class Program341{

public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Digit obj=new Digit();
boolean bRet=obj.CheckArmStrongs(no);
System.out.println("Count of Digit:"+bRet);
if(bRet==true){
System.out.println("Number is armstrong");

}
else{

System.out.println("Number is not armstrong");
}

}
}