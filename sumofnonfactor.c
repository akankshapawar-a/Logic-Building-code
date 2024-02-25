// Accept number from user and display summiation all its non factor
#include<stdio.h>
int nonfactor(int iNo){
int iCnt=0;
int iSum=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if(iNo%iCnt!=0){ 
iSum=iSum+iCnt;
}
}
return iSum;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=nonfactor(iValue);
printf("%d",iRes);
return 0;
}