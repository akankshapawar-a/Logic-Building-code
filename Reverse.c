#include<stdio.h>
int Reverse(int iNo ){
int iDigit=0;
int reverse=0;
if(iNo < 0)
    {
        iNo = -iNo;
    }

while(iNo!=0){
iDigit=iNo%10;
reverse=reverse*10+iDigit;
iNo=iNo/10;
}
return reverse;
}
int main(){
int iValue=0;
int iRet=0;
printf("enter any number:");
scanf("%d",&iValue);
iRet= Reverse(iValue);
printf("%d",iRet);
return 0;

}