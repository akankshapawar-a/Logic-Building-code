// Accept number from user and display diff betn summiation of all its non factor and factor
#include<stdio.h>
int sumationdiff(int iNo){
int iCnt=0;
int iSum1=0;
int iSum2=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if(iNo%iCnt==0){
iSum1=iSum1+iCnt;
}
if(iNo%iCnt!=0){
iSum2=iSum2+iCnt;
}
}
return iSum1-iSum2;


}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes= sumationdiff(iValue);
printf("%d",iRes);
return 0;
}
