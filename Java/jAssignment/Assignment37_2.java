/*
Write a java program which accepts 2 strings from user and concat N characters of second string after first string. Value of N should be accepted from user. Note: If third parameter is greater than the size of second string then concat whole string after first string.

Enter the first String:
Marvellous Infosystems
Enter the second String:
Logic Building
Enter the number of characters you want to concatenate:
5
Marvellous InfosystemsLogic
*/

/*

*/
import java.util.*;

class StrCon {
    public String concateStr(String s1, String s2) {
        char[] arr = s1.toCharArray();
        char[] brr = s2.toCharArray();
        char[] concate = new char[arr.length + n];
        int iCnt = 0;
int idx=0;
        for (iCnt = 0; iCnt < arr.length; iCnt++) {
            concate[idx++] = arr[iCnt];
        }
        
        for ( iCnt = 0; iCnt < n; iCnt++) {
            concate[idx++] = brr[iCnt];
        }
        
        return new String(concate);
    }

    public boolean check(String s1, String s2) {
        if (n > s2.length()) {
            String con = concateStr(s1, s2);
return con.equals( concateStr(s2, s1));
        } else {
            String con = concateStr();
            System.out.println(con);
        }

    }

 

}

class Assignment37_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the first String:");
        String s1 = sc.nextLine();
        System.out.println("Enter the second String:");
        String s2 = sc.nextLine();
        System.out.println("Enter the number of characters you want to concatenate:");
        int n = sc.nextInt();

        StrCon obj = new StrCon();
        obj.stringcon(s1, s2, n);
        sc.close();
    }
}
