//GreaterSamller2
//find Smallest element in array

#include<stdio.h>
#include<stdlib.h>
int Smallest(int arr[],int iLength){
int iCnt=0;
int Min=arr[0];
int Max=arr[0];


for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]<Min){
 Min=arr[iCnt];
}
  if(arr[iCnt]>Max){
 Max=arr[iCnt];
}
}
printf("%d",Max);
printf("%d",Min);


}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
int iRes=0;
printf("enter number in array:");
scanf("%d",&iSize);
ptr=(int *) malloc(iSize*(sizeof(int)));
if(ptr==0){
printf("Unable to allocate a memory");
return -1;}
printf("enter elements in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}

iRes=Smallest(ptr,iSize);
printf("%d",iRes);
free(ptr);
return 0;
}
