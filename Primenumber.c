//Prime number
#include<stdio.h>
#include<stdbool.h>
bool Check(int iNo){
int iCnt=0;
bool flag=true;
for(int iCnt=2;iCnt<=(iNo/2);iCnt++){
if(iNo%iCnt==0){
flag=false;
 break;
}
} 
return bflag;
}
int main(){
int iValue=0;
bool iRes=false;
printf("Enter any number");
scanf("%d",&iValue);
iRes=Check(iValue);
if(iRes==true){
printf("%d Given number is prime ",iValue);
}
else{
printf("%d Given number is not prime ",iValue);

}
return 0;
}
