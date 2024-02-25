//check wherther perfect number or not
#include<stdio.h>
#include<stdbool.h>
int DisplaySum(int iNo){
int iCnt=0;
int sum=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<(iNo/2);iCnt++){
if((iNo%iCnt)==0){
sum=sum+iCnt;
}
}
return sum;
}
void checkPerfect(int iNo2){
int Res=0;
Res=DisplaySum(iNo2);
if(Res==iNo2){}
return true;
}
else{
return false;


}
}
int main(){
int iValue=0;
bool bres=false;
printf("enter any number:");
scanf("%d",&iValue);
bres=checkPerfect(iValue);
if(bres==true){
printf("Given number is a perfect ");
}
else{

printf("Given number is not perfect");
  }
return 0;
}