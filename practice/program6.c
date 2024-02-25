#include<stdio.h>
#include<stdlib.h>
int addition(int arr[],int iLength){
int iCnt=0;
int sum=0;
for(iCnt=0;iCnt<iLength;iCnt++){
sum=sum+iCnt;
}
return sum;
}
int main(){
int *ptr=NULL;
int iCnt=0;
int iSize=0;
printf("enter the number:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter elements in array:");
for(iCnt=0;iCnt<iNo;iCnt++){
scanf("%d",&ptr[iCnt]);

}
printf("enter the array element:");
for(iCnt=0;iCnt<iNo;iCnt++){
printf("%d",ptr[iCnt]);
}
return 0;
}