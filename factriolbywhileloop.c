//factriol by while loop
#include<stdio.h>
int fact(int iNo){
int fact=1;

int i=0;
while(i<=0){
fact=fact*i;
i--;

}
printf("%d",fact);
}
int main(){
int iValue=0;
int iRes=0;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Factriolno(iValue);
printf("%d",iRes);
return 0;
}