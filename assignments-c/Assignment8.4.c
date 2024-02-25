// write a program which accept number from user and return 
// multiplication of all digits

// input: 2395
// output : 270
#include<stdio.h>
int Display(int iNo){

int iDigit=0;
int mul=1;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;

if(iDigit==0){
iDigit=1;
}
mul=mul*iDigit;
iNo=iNo/10;

}
return mul;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Display(iValue);
printf("%d",iRes);
return 0;
}