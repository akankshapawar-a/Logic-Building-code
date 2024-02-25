import java.util.*;
class pattern{
public void Pattern(int iRow,int iCol){
for(int i=0;i<iRow;i++){
for(int j=0;j<iCol;j++){
char currChr=(char)('A'+j);
System.out.print(currChr);
if(j<iCol-1){
System.out.print(" ");
}
}
  System.out.println();
}
}
}

class Assignment38_1{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("enter row:");
int iRow=sc.nextInt();
System.out.println("enter Col:");
int iCol=sc.nextInt();
pattern obj=new pattern();
obj.Pattern(iRow,iCol);
}
}