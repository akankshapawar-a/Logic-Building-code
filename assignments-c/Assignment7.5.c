// write a program which accept number from user and count frequency of such a digits which are less than 6

// input : 2317
// output: 3

// input : 1453
// output: 4
#include<stdio.h>
int Display(int iNo){
int iDigit=0;
int count=0;
while(iNo!=0){
iDigit=iNo%10;
if(iDigit<6){
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
iRes=Display(iValue);
printf("%d",iRes);
return 0;
}