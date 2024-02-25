// Input : 7
// Output : a   1   b   2   c   3   d   4   e   5   f   6   g   7

// Input : 3
// Output : a   1   b   2   c   3 
#include<stdio.h>
void Display(int iNo ){
int iCnt=0;
char ch='\0';
for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++){
printf("%c\t%d\t",ch,iCnt);

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

