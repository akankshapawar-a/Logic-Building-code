//sum of factor digit
#include<stdio.h>
int DisplaySum(int iNo){
int iCnt=0;
int sum=0;
for(iCnt=1;iCnt<=(iNo/2);iCnt++){
if((iNo%iCnt)==0){
sum=sum+iCnt;
}
}
return sum;
}
int main(){
int iValue=0;
int iRet=0;
printf("enter any number:");
scanf("%d",&iValue);
 iRet=DisplaySum(iValue);
 printf("%d",iRet);



return 0;
}