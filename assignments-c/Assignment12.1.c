//Accept the n number from user and return largest number
//5
//input:3 22 44 66 15
//output:66
#include<stdio.h>
#include<stdlib.h>
int Largestno(int arr[],int iLength){
int iCnt=0;
int iMax=arr[0];
for(iCnt=0;iCnt<iLength;iCnt++){
if(arr[iCnt]>iMax){
iMax=arr[iCnt];
}
}
return iMax;
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
iRes=Largestno(ptr,iSize);
printf("%d",iRes);
return 0;
}