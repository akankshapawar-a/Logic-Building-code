#include<stdio.h>
#include<stdbool.h>
int CheckDivisible(int iNo){
if(iNo%5==0){
return true;
}
else{
return false;
}
}
int main(){
int iValue=0;
bool bRet=false;
printf("enter any number:");
scanf("%d",&iValue);
bRet= CheckDivisible(iValue);
if(bRet==true){
printf("Given number is divisible by 5");
}
else{
printf("Given number is not  divisible by 5");

}
return 0;

}