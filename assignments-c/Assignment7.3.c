//Count frequency of 2
#include<stdio.h>
#include<stdbool.h>
int Check(int iNo){

int iDigit=0;
int count=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
if(iDigit==2){
count++;
}
iNo=iNo/10;

}
return count;
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Check(iValue);
printf("%d",iRes);
return 0;
}