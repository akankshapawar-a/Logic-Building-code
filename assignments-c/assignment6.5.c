// write a program which accept number from user and display its table in reverse order

// input : 2
// output : 20 18  16 14 12 10 8 6 4 2 

#include<stdio.h>
int Display(int iNo){
int iCnt=0;
int table=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=10;iCnt>=1;iCnt--){
table=iNo*iCnt;
printf("%d\t",table);
}

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