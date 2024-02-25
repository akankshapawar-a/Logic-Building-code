// Input : 7
// Output : a   b   c   d   e   f   g

// Input : 3
// Output : a   b   c   
#include<stdio.h>
void Display(int iNo ){
int iCnt=0;
char ch='A';
for(iCnt=1;iCnt<=iNo;iCnt++){
printf("%c\t",ch);
ch++;
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

