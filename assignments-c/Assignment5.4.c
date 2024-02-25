// write a program  which  accept N from usr and print all odd numbers up to N

// input : 18
// output: 1 3 5 7 11 13 15 17

#include<stdio.h>
void Display(int iNo){
int iCnt=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<=iNo;iCnt++){
if(iCnt%2!=0){
 printf("%d\t",iCnt);
}

}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}