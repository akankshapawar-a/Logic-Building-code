// write a program which accept number from user and return differnece between summation 
// of even digits and summation of odd digits.

// input : 2395
// output : -15 (2-17)

// input : 1018
// output : 6 (8-2)

#include<stdio.h>
int Check(int iNo){

int iDigit=0;
int iSum1=0;
int iSum2=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
if(iDigit%2==0){
    iSum1=iSum1+iDigit;
}
if(iDigit%2!=0){
    iSum2=iSum2+iDigit;
}


iNo=iNo/10;

}
return iSum1-iSum2;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Check(iValue);
printf("%d",iRes);
return 0;
}