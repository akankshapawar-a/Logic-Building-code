#include<stdio.h>

#include<stdlib.h>
void Range(int arr[],int iLength,int start,int end){
int iCnt=0;
for(iCnt=start;iCnt<end;iCnt++){
printf("%d",iCnt);
}

}
int manin(){
int iCnt=0;
int *ptr=NULL;
int iSize=0;
int iValue1=0;
int iValue2=0;
printf("enter etements in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize* sizeof(int));
if(ptr==NULL){
printf("Unable to allocate memory");

}


printf("elements enter in array:");
for(iCnt=0;iCnt<iSize;iCnt++)
{
scanf("%d",&ptr[iCnt]);
}
printf("enter start number:");
scanf("%d",&iValue1);
printf("enter number in array:");
scanf("%d",&iValue2);

Range(ptr,iSize,iValue1,iValue2);
return 0;

}