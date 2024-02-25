import java.util.*;

class StringX
{
 public String WhiteSpaces(String str){
char arr[]=str.toCharArray();
char brr[]=new char[arr.length];
int i=0;
for(int iCnt=0;iCnt<arr.length;iCnt++){
if(arr[iCnt]!=' '){
brr[i]=arr[iCnt];
i++;
}
}

return new String(brr);
}
}

class program360
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
String iret=obj. WhiteSpaces(name);
System.out.println("Result is : "+iret);

       
    }
}