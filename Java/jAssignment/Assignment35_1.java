/*
1.Write a java program which accept number from user and return the count of even digits.
Enter any number:
2395
Count of Even Digits: 1

Enter any number:
1018
Count of Even Digits: 2

Enter any number:
-1018
Count of Even Digits: 2*/

import java.util.*;

class Digit {
    int countDigits(int iNo) {
        int iCount = 0;
        int iDigit = 0;
        while (iNo != 0) {
            iDigit = iNo % 10; 
            if (iDigit % 2 == 0) {
                iCount++;
            }
            iNo = iNo / 10;
        }
        return iCount;
    }
}

public class Assignment35_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number:");
        int no = sc.nextInt();
        Digit obj = new Digit();
        int bRet = obj.countDigits(no);
        System.out.println("Count of Even Digits: " + bRet);
    }
}
