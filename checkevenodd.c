#include<stdio.h>
#include<stdbool.h>
int CheckEvenOdd(int iNo){
if(iNo%2==0){
return true;
}
else{
return false;
}

}
int main(){
int iValue=0;
bool bRet=false;
printf("Enter the number :");
scanf("%d",&iValue);
bRet=CheckEvenOdd(iValue);
if(bRet==true){
printf("number is even");
}
else{
printf("number is odd");
}
}