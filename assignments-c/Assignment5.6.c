// write a program which accept number from user and print its numbers line

// input : 4
// output : - 4 - 3 -2 -1 0 1 2 3 4


#include<stdio.h>
void Display(int iNo){
int i=iNo;
int iCnt=0;
if(iNo>0){
iNo=-iNo;
}
for( iCnt=iNo;iCnt<=i;iCnt++){
printf("%d",iCnt);
}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}