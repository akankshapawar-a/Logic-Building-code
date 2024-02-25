// number of digits
#include<stdio.h>
int DisplayDigit(int iNo){

int iCnt=0;
while(iNo!=0){
iCnt++;
iNo=iNo/10;
}
return iCnt;
}
int main(){
int iValue=0;
int iRet=0;
printf("enter any number");
scanf("%d",&iValue);
iRet=DisplayDigit(iValue);
printf("%d",iRet);
return 0;

}