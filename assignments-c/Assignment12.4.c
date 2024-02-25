
#include<stdio.h>
#include<stdlib.h>
int Digit(int arr[],int iLength){
int iCnt=0;
int count=0;
for(iCnt=0;iCnt<iLength;iCnt++){
if(arr[iCnt]>=100 && arr[iCnt]<1000){
printf("%d",arr[iCnt]);
}


}


}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;

printf("enter the element in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter element in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}
Digit(ptr,iSize);

return 0;
}