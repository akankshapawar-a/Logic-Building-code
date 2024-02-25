//print 5 times jay using filter
#include<stdio.h>
void display(int iNo){
int i=0;
if(iNo<0){
printf("please enter positive number ");
return;
}
for(int i=1;i<iNo;i++){
printf("jay ganesh....");
}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);

display(iValue);
return 0;
}