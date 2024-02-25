// Accept one number from user and print that numbe of * on screen
#include<stdio.h>
void Accept(int iNo){
int i=0;
for(int i=1;i<=iNo;i++){
printf("*");
}
}
int main(){
int iValue=0;
printf("Enter any number:");
scanf("%d",&iValue);
Accept(iValue);
return 0;}