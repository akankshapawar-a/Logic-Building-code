//Check whearther 2 no are equal or not
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo1,int iNo2){
if(iNo1==iNo2){
return true;
}
else{
return false;}
}
int main(){
int iValue1=0;
int iValue2=0;
bool bRes=false;
printf("enter any number:");
scanf("%d",&iValue1);
printf("enter any number:");
scanf("%d",&iValue2);
bRes=Check(iValue1 ,iValue2);
if(bRes ==true){
printf("Equal");
}
else{
printf("Not Equal");
}
return 0;
}