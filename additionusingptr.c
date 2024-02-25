//Addition using a ptr;
#include<stdio.h>
#include<stdlib.h>
int Addition(int arr[],int iLength){
int iSum=0;
int iCnt=0;
for(iCnt=0;iCnt<iLength;iCnt++){
iSum=iSum+arr[iCnt];

}
return iSum;
}
int main(){
int iSize=0;
int *ptr=NULL;
int iCnt=0;
int iRes=0;
printf("Enter the number of elements:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize * sizeof(int));
printf("Enter the elements in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}
printf("Elements of Array:");
for(int iCnt=0;iCnt<iSize;iCnt++){
printf("%d",ptr[iCnt]);
}
iRes=Addition(ptr,iSize);
printf("Addition: %d",iRes);

free(ptr);
return 0;
}