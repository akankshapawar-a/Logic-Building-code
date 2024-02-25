#include<stdio.h>
#include<stdlib.h>
int addition(int arr[],int iLength){
int iCnt=0;
int sum=0;
for(iCnt=1;iCnt<iLength;iCnt++){
sum=sum+arr[iCnt];
}
return sum;
}
int main(){
int *ptr=NULL;
int iCnt=0;
int iSize=0;
int iRes=0;
printf("enter the number:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter elements in array:");
for(iCnt=1;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);

}
printf("enter the array element:");
for(iCnt=1;iCnt<iSize;iCnt++){
printf("%d",ptr[iCnt]);
}
iRes=addition(ptr,iSize);
printf("Addition: %d",iRes);

free(ptr);
return 0;
}