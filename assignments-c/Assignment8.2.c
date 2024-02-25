// write a program which accept number from user and return
// the count of odd digits

// input : 2395
// output: 3
 
 // input : -1018
 // output : 2
#include<stdio.h>
int Check(int iNo){

int iDigit=0;
int count=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
if(iDigit%2!=0){
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