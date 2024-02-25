// write a prgroam which acept number fom user and print numbers til 
// till that numbers

// input : 8
//output : 1 2 3 4 5 6 7 8;


#include<stdio.h>
void Display(int iNo){
int iCnt=0;
if(iNo<0){
iNo=-iNo;
}
for(iCnt=1;iCnt<=iNo;iCnt++){
if(iNo%iCnt!=0){
printf("%d\t",iCnt);

}

}
}
int main(){
int iValue=0;
printf("enter any number:");
scanf("%d",&iValue);
Display(iValue);
return 0;
}