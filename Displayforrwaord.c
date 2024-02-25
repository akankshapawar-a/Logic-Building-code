//Display forrwaord
#include<stdio.h>
void Displayf(int iNo){
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
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