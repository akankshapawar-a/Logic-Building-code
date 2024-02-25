// Average of using ptr
#include<stdio.h>
#include<stdlib.h>
float Average(int arr[],int iLength){
int iCnt=0;
int iSum=0;
for(iCnt=0;iCnt<iLength;iCnt++){
iSum=iSum+arr[iCnt];
}
return ((float)iSum/ (float)iLength);
}
int main(){
int iSize=0;
int *ptr=0;
int iCnt=0;
float fRes=0.0f;
printf("enter number in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize *sizeof(int));
printf("enter elements in array:");
for(iCnt=0;iCnt<iSize ;iCnt++){
scanf("%d",&ptr[iCnt]);
}
printf("elements in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
printf("%d",ptr[iCnt]);
}
fRes=Average(ptr,iSize);
printf("\n%d",fRes);

free(ptr);

}