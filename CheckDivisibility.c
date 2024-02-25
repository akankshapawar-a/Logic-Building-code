#include<stdio.h>
#include<stdbool.h>
int CheckDivisibility(int iNo){
if((iNo%3==0) && (iNo%5==0)){
return true;
}
else{
return false;
}
}
int main(){
int iValue=0;
bool bRet=false;
printf("enter any number ");
scanf("%d",&iValue);
bRet= CheckDivisibility(iValue);
if(bRet==true){
printf(" the number is completely divisible by 3 and 5");
}
else{
printf(" the number is not completely divisible by 3 and 5");

}
return 0;
}