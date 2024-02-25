// Input : 7
// Output : 0   1   2   3   4   5   6

// Input : 3
// Output : 0   1   2

#include<stdio.h>
void Display(int iNo ){
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
printf("%d\t",iCnt-1);
}
printf("\n");

}
int main(){
int iValue=0;
printf("enter any nummber:");
scanf("%d",&iValue);
Display(iValue);
return 0;

}