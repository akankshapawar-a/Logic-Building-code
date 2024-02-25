import java.util.*;
class stringX{
public int Countsmall(String str){
char arr[]=str.toCharArray();
int iCount=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='a') && (arr[iCnt]<='z')){

iCount++;
}
}
return iCount;
}

public int CountCapital(String str){
char arr[]=str.toCharArray();
int iCount=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='A') && (arr[iCnt]<='Z')){

iCount++;
}
}
return iCount;
}

}



class Program354{
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