// wirte a program to find factorial of give number

// input : 5 
// output: 120

// input : -5
// output : 120

#include<stdio.h>
int Display(int iNo){
int iCnt=0;
int fact=1;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<=iNo;iCnt++){
fact=fact*iCnt;
}
return fact;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any element:");
scanf("%d",&iValue);
iRes=Display(iValue);
printf("%d",iRes);
return 0;

}