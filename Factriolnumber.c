//Factriol number
#include<stdio.h>
int Factriolno(int iNo){
int iFact=1;
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
iFact=iFact*iCnt;
}
return iFact;
 }
int main()
{
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Factriolno(iValue);
printf("%d",iRes);
return 0;
}
