//Power
#include<stdio.h>
int Power(int iBase,int ipower){
int iCnt=0;
int iResult=1;
for(int iCnt=1;iCnt<=ipower;iCnt++){
iResult=iResult*iBase;
}
return iResult;

}
int main(){
int iValue1=0;
int iValue2=0;
int iRet=0;
printf("enter number base no:");
scanf("%d",&iValue1);
printf("enter number power no:");
scanf("%d",&iValue2);
iRet=Power(iValue1, iValue2);
printf("%d",iRet);
return 0;
}