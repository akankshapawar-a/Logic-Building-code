// write a program which accept number from user and display its table

// input : 2
// output : 2 4 6 8 10 12 14 16 18 20

#include<stdio.h>
int Display(int iNo){
int iCnt=0;
int table=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<=10;iCnt++){
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