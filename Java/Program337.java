import java.util.*;
class Digit{
public int countDigit(int iValue){

int iCount=0;
while(iValue!=0){

iCount++;
iValue=iValue/10;
}
return iCount;
}

}


class Program337{

public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
Digit obj=new Digit();
int iRet=obj.countDigit(no);
System.out.println("Count of Digit:"+iRet);


}
}