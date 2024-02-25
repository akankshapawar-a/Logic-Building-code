import java.util.*;
class Digit{

int countDigits(int iNo){
int iCount=0;
while(iNo!=0){
iCount++;
iNo=iNo/10;
}
return iCount;
}

int Power(int x , int y){
int iPower=1;
for(int iCnt=1;iCnt<=y;iCnt++){
iPower=iPower*x;
}
return iPower;
}
public boolean CheckArmStrongs(int iNo){
int iCount=0,iDigit=0;
iCount=countDigits(iNo);

int iTemp=iNo;
int iSum=0;
while(iNo!=0){
iDigit=iNo%10;
iSum=iSum+Power(iDigit,iCount);
iNo=iNo/10;
}
 if(iSum == iTemp)
 {
 return true;
 }
 else
 {
 return false;
}
}
}
class Program342{

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