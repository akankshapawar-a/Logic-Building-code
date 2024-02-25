//Accept the n number from user and return largest number
//5
//input:3 22 44 66 15
//output:3
#include<stdio.h>
#include<stdlib.h>
int Smallestno(int arr[],int iLength){
int iCnt=0;
int iMin=arr[0];
for(iCnt=0;iCnt<iLength;iCnt++){
if(arr[iCnt]<iMin){
iMin=arr[iCnt];
}
}
return iMin;
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
iRes=Smallestno(ptr,iSize);
printf("%d",iRes);
return 0;
}