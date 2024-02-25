
// Accept N number from user and return difference between summation
// of even elements and summation of odd elements

// input : N : 6
//      elements L 85 66 30 3 93 88
// output : 53 (234-181)


#include<stdio.h>
#include<stdlib.h>
int EvenOddDiff(int arr[],int iLength){
int iCnt=0;
int iSum1=0;
int iSum2=0;
for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]%2==0){
   iSum1=iSum1+arr[iCnt];
}
if(arr[iCnt]%2!=0){
 iSum2=iSum2+arr[iCnt];
}

}
return iSum1-iSum2;
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
//printf("elements in array:");
//for(iCnt=0;iCnt<iSize;iCnt++){
//printf("%d",ptr[iCnt]);
//}
iRes=EvenOddDiff(ptr,iSize);
printf("%d",iRes);
free(ptr);
return 0;
}
