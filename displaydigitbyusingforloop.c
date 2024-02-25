//display digit by using forloop
#include<stdio.h>
void Display(int iNo){
int iDigit=0;
int iCnt=0;
//for(;iN0!=0;iNo=iNo/10)

 for( ;iNo != 0; )
//for(iCnt=1;iCnt<=iNo;iCnt++)

{
iDigit=iNo%10;
printf("%d\n",iDigit);
iNo=iNo/10;

}
}
int main(){
int iValue=0;
printf("enter any no:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}