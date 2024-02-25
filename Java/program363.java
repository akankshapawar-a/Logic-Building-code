import java.util.*;

class StringX
{
public String Reverse(String str){
char arr[]=str.toCharArray();
int iStart=0;
int iEnd=arr.length-1;
char cTemp=' ';

while(iStart<iEnd){
cTemp=arr[iStart];
arr[iStart]=arr[iEnd];
arr[iEnd]=cTemp;

iStart++;
iEnd--;
}
return new String(arr);
}
}

class program363
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your name : ");
        String name = sobj.nextLine();

        StringX obj = new StringX();
String iret=obj.Reverse(name);
System.out.println("Result is : "+iret);

       
    }
}