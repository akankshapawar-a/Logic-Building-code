//power by unsigned 
//calculate power
#include<stdio.h>
unsigned long int power(int iBase,int iPower){
unsigned long int iResult=1;
int iCnt=0;
if(iPower<0 || iBase<0){
return 0;
}
for(iCnt=1;iCnt<=iPower;iCnt++){
  iResult=iResult*iBase;

}
return iResult;
}
int main(){
int iValue1=0;
int iValue2=0;
unsigned long int iRet=0;
printf("enter number base no:");
scanf("%d",&iValue1);
printf("enter number power no:");
scanf("%d",&iValue2);
iRet=power(iValue1,iValue2);
printf("%d",iRet);
return 0;
}