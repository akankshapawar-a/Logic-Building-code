//Accept the number from user and return product of all elements
//5
//input:3 22 44 66 15
//output:45
#include<stdio.h>
#include<stdlib.h>
int ProductOdd(int arr[],int iLength){
int iCnt=0;
int iPro=1;
for(iCnt=0;iCnt<iLength;iCnt++){
if(arr[iCnt]%2!=0){
iPro=iPro*arr[iCnt];
}
}
return iPro;
}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
int iRes=0;
printf("enter the element in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter element in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}
iRes=ProductOdd(ptr,iSize);
printf("%d",iRes);
return 0;
}