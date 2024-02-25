//Display Backward
#include<stdio.h>
void Displayf(int iNo){
int iCnt;
for(iCnt=iNo;iCnt>=1;iCnt--){
printf("%d",iCnt);
}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Displayf(iValue);

return 0;
}