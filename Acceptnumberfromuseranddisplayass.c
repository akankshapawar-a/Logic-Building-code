// Accept number from user and display factor in reverse factor
#include<stdio.h>
void Reverses(int iNo){
int iCnt=0;
for(iCnt=iNo-1;iCnt>=1;iCnt--){
if(iNo%iCnt==0){ 
printf("\n%d",iCnt);
}
}
}
int main(){
int iValue=0;

printf("enter any number:");
scanf("%d",&iValue);
Reverses(iValue);

return 0;
}