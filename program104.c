// Input : 7
// Output : a   b   c   d   e   f   g

// Input : 3
// Output : a   b   c   
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

