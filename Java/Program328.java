import java.util.*;
class Program328{
public static void main(String []args){
Scanner sc=new Scanner (System.in);
System.out.println("enter any number:");
int no=sc.nextInt();
int Mul=1;
for(int iCnt=1;iCnt<=no;iCnt++){
Mul=Mul*iCnt;
}
System.out.println("Factriol:"+Mul);

}
}