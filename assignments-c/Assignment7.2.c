
// write a program which accept number from user and check whether it conatain 0 in it or not

// input: 2395
// output : There is no Zero

// input: 1018
// output : It contain Zero
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo){

int iDigit=0;
if(iNo<0){
iNo=-iNo;
}
while(iNo!=0){
iDigit=iNo%10;
if(iDigit==0){
break;
}
iNo=iNo/10;
}
if(iDigit==0){
return true;
}
else{
return false;
}
}
int main(){
int iValue=0;
bool iRes=false;
printf("enter any number:");
scanf("%d",&iValue);
iRes=Check(iValue);
if(iRes==true){
printf("It contain zero");
}
else{
printf("There is no zero");
}
return 0;
}