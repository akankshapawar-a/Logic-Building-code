// Accept number from user and display all its non factor
#include<stdio.h>
void nonfactor(int iNo){
int iCnt=0;
for(iCnt=1;iCnt<iNo;iCnt++){
if(iNo%iCnt!=0){ 
printf("\t%d",iCnt);
}
}
}
int main(){
int iValue=0;

printf("enter any number:");
scanf("%d",&iValue);
nonfactor(iValue);

return 0;
}