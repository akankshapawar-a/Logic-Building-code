//Accept three number and display multiplication
#include<stdio.h>
int Display(int iNo1 ,int iNo2, int iNo3){
int mul=1;
if(iNo1==0 && iNo2==0 && iNo3==0){
 mul=0;
}
else{
if(iNo1==0){
iNo1=1;
}
 if(iNo2==0){
iNo2=1;
}
 if(iNo3==0){
iNo3=1;
}

mul=iNo1*iNo2*iNo3;
}
return mul;
}
int main(){
int iValue1=0;
int iValue2=0;
int iValue3=0;
int iRes=0;
printf("Enter the first Number:");
scanf("%d",&iValue1);
printf("Enter the second Number:");
scanf("%d",&iValue2);
printf("Enter the third Number:");
scanf("%d",&iValue3);
iRes=Display(iValue1,iValue2,iValue3);
printf("%d",iRes);

return 0;
}