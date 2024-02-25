#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo){
int iCnt=0;
int sum=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
sum=sum+iCnt;
if(sum>iNo){
break;
}
}


if(sum==iNo){
return true;
}
else{
return false;
}
}
int main(){
int iValue=0;
bool iRes=false;
printf("Enter any number:");
scanf("%d",&iValue);
iRes=Check(iValue);
if(iRes==true){
  printf("%d is a perfect number\n",iValue);

}
else{
        printf("%d is not a perfect number\n",iValue);

}
return 0;
}