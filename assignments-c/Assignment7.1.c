// write a program which accept number from user and display its digits in reverse order

//input : 2395
// output : 5
//          9
//          3
//          2
#include<stdio.h>
void Display(int iNo){

int iDigit=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
printf("%d\n",iDigit);
iNo=iNo/10;
}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}