// Accept number from user and display multiplication of factor
#include<stdio.h>
int multiplication(int iNo){
int iCnt=0;
int mul=1;
for(iCnt=1;iCnt<iNo;iCnt++){
if(iNo%iCnt==0){
  mul=mul*iCnt;
}
}
return mul;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=multiplication(iValue);
printf("%d",iRes);
return 0;
}