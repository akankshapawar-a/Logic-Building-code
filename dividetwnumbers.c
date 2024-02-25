// prgram to divide two numbers

#include<stdio.h>
int DivideNo(int iNo1 ,int iNo2){
int iAns=0;
if(iNo2 ==0){
return -1;
}
else{
iAns= (iNo1/iNo2);
}
return iAns;
}
int main(){
int iRet=0;
int iValue1=15,iValue2=3;
iRet=DivideNo(iValue1,iValue2);
printf("Ans is %d" ,iRet);
return 0;
}