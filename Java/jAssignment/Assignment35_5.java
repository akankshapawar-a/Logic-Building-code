/*
5.Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.
Enter any number:
2395
Count of Even Digits: -15

Enter any number:
1018
Count of Even Digits: 6
*/

import java.util.*;

class Digit {
    int countDigits(int iNo) {
        int sum1=0;
int sum2=0;
        int iDigit = 0;
        while (iNo != 0) {
            iDigit = iNo % 10;
    if(iDigit%2==0){ 
            sum1=sum1+iDigit;
}
else if(iDigit%2!=0){
 sum2=sum2+iDigit;
}
            iNo = iNo / 10;
        }
        return sum1-sum2;
    }
}

public class Assignment35_5{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter any number:");
        int no = sc.nextInt();
        Digit obj = new Digit();
        int bRet = obj.countDigits(no);
        System.out.println("Count of Even Digits: " + bRet);
    }
}