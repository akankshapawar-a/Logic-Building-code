

#include<stdio.h>
void Display(int iNo){
int iCnt=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<=iNo;iCnt++){
if(iNo%2!=0){
 printf("%d\t",iCnt);

}

}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}