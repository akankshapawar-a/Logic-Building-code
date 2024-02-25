//  write a program which accept number from user and return the count
//  of digits in between 3 and 7

// input : 2395
// output : 1

#include<stdio.h>
int Check(int iNo){

int iDigit=0;
int count=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
if( iDigit<7 && iDigit>3){
count++;
}
iNo=iNo/10;

}
return count;
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