// Input : 7
// Output : 1   2   3   4   5   6   7  

// Input : 3
// Output : 1   2   3   


#include<stdio.h>
void Display(int iNo ){
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
printf("%d\t",iCnt);
}
printf("\n");

}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;

}