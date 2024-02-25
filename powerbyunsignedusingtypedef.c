//power by unsigned using typedef
//calculate power
#include<stdio.h>
typedef unsigned long int ULONG;
 ULong int power(int iBase,int iPower){
 ULong int iResult=1;
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
 ULong powerbyunsignedusingtypedef.cint iRet=0;
printf("enter number base no:");
scanf("%d",&iValue1);
printf("enter number power no:");
scanf("%d",&iValue2);
iRet=power(iValue1,iValue2);
printf("%d",iRet);
return 0;
}