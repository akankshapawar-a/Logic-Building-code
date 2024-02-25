import java.util.*;
class stringX{
public int Countsmall(String str){
int iCount=0;
for(int iCnt=0;iCnt<str.length();iCnt++){
if((str.charAt(iCnt)>='a') && (str.charAt(iCnt)<='z')){

iCount++;
}
}
return iCount;
}

public int CountCapital(String str){
int iCount=0;
for(int iCnt=0;iCnt<str.length();iCnt++){
if((str.charAt(iCnt)>='A') && (str.charAt(iCnt)<='Z')){

iCount++;
}
}
return iCount;
}

}



class Program355{
public static void main(String [] args){
Scanner sc=new Scanner(System.in);
System.out.println("enter your name:");
String name=sc.nextLine();
stringX obj =new stringX();
int iRet=obj.Countsmall(name);
System.out.println(iRet);

 iRet=obj.CountCapital(name);
System.out.println(iRet);
}
}