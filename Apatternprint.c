// Input : 7
// Output : A   A   A   A   A   A   A   

// Input : 3
// Output : A   A   A  
#include<stdio.h>
void Display(int iNo ){
int iCnt=0;
for(iCnt=1;iCnt<=iNo;iCnt++){
printf("A\t");
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