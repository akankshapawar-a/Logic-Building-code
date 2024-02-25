import java.util.*;

class StringX
{
public String RemoveSpace(String str){
char arr[]=str.toCharArray();
String output="";
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt]!=' '){
output=output+arr[iCnt];
}
}
return output;
}
}

class program361
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
String iret=obj.RemoveSpace(name);
System.out.println("Result is : "+iret);

       
    }
}