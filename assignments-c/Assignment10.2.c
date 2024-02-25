// Accept N number from user and return diff between frequency of even and odd number from it

// input N : 6
// element : 85 66 3 15 11 88
// output : -2

#include<stdio.h>
#include<stdlib.h>
int EvenOddDiff(int arr[],int iLength){
int iCnt=0;
int count1=0;
int count2=0;
for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]%2==0){
   count1++;
}
if(arr[iCnt]%2!=0){
count2++;
}

}
return count1-count2;
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
