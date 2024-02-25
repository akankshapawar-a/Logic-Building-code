// sum of digit
#include<stdio.h>
int sumofdigit(int iNo){
int iDigit=0;
int iSum=0;
while(iNo!=0){
iDigit=iNo%10;
iSum=iSum+iDigit;
iNo=iNo/10;
}
return iSum;
}
int main(){
int iValue=0;
int iRet=0;
printf("Enter any Number:");
scanf("%d",&iValue);
iRet=sumofdigit(iValue);
printf("%d",iRet);

return 0;
}