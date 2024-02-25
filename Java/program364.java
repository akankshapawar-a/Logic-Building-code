import java.util.*;
public class program364{
public static void main(String []args){
Scanner sc=new Scanner(System.in);
System.out.println("Enter String:");
String str=sc.nextLine();

str=str.toLowerCase();

char arr[]=str.toCharArray();
int Freq[]= new int[26];
int iCnt=0;
for(iCnt=0;iCnt<arr.length;iCnt++){
Freq[arr[iCnt]-'a']++;
}
System.out.println("Frequency of each Letter is:");
for(iCnt=0;iCnt<Freq.length;iCnt++){
System.out.println("Frequency of"+(char)(iCnt-'a')+"is :"+Freq[iCnt]);
}

}
}