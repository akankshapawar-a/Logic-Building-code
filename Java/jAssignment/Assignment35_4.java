/*
4.Write a program which accept number from user and return multiplication of all digits,
Enter any number:
2395
Count of Even Digits: 270


Enter any number:
1018
Count of Even Digits: 0


Enter any number:
922432
Count of Even Digits: 864
*/

import java.util.*;

class Digit {
    int countDigits(int iNo) {
        int mul = 1;
        int iDigit = 0;
        while (iNo != 0) {
            iDigit = iNo % 10; 
            mul=mul*iDigit;
            iNo = iNo / 10;
        }
        return mul;
    }
}

public class Assignment35_4{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number:");
        int no = sc.nextInt();
        Digit obj = new Digit();
        int bRet = obj.countDigits(no);
        System.out.println("Count of Even Digits: " + bRet);
    }
}