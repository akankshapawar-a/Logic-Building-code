//Check wheather number is greater tham 100 or not
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo){
if(iNo>100){
return true;
}
else{
return false;
}
}
int main(){
int iValue=0;
bool bRes=false;
printf("enter any number:");
scanf("%d",&iValue);
bRes=Check(iValue);
if(bRes==true){
printf("Greater");
}
else{
printf("not Greater");
}
return 0;
}