import java.util.*;
class stringX{
public String strLower(String str){
char arr[]=str.toCharArray();
for(int iCnt=0; iCnt<arr.length;iCnt++){
if((arr[iCnt]>='A') && (arr[iCnt]<='Z')){
arr[iCnt]=(char)(arr[iCnt]+32);
}
}
String ret=new String(arr);
return ret;
}

public String strUpper(String str){
char arr[]=str.toCharArray();
for(int iCnt=0; iCnt<arr.length;iCnt++){
if((arr[iCnt]>='a') && (arr[iCnt]<='z')){
arr[iCnt]=(char)(arr[iCnt]-32);
}
}
String ret=new String(arr);
return ret;
}

public String Toggle(String str){
char arr[]=str.toCharArray();
for(int iCnt=0;iCnt<arr.length;iCnt++){
if((arr[iCnt]>='a') && (arr[iCnt]<='z')){
arr[iCnt]=(char)(arr[iCnt]-32);

}
else if((arr[iCnt]>='A') && (arr[iCnt]<='Z')){
arr[iCnt]=(char)(arr[iCnt]+32);

}

}

String ret=new String (arr);
return ret;
}


}
class Program358{
public static void main(String [] args){
Scanner sc=new Scanner(System.in);
System.out.println("enter your name:");
String name=sc.nextLine();
stringX obj =new stringX();
String iRet=obj.strLower(name);
System.out.println(iRet);

 iRet=obj.strUpper(name);
System.out.println(iRet);
iRet=obj.Toggle(name);
System.out.println(iRet);


}
}