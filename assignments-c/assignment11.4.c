// Accept N numbers from user and accept Range, Disaplay all elements from
// that range

// Input: N : 6
// start : 60
// end : 90
// elements : 85 66 3 76 93 88
// output : 66 76 88

#include<stdio.h>
#include<stdlib.h>
void Range1(int arr[],int iLength,int start,int end){
int iCnt=0;
for(iCnt=0;iCnt<iLength;iCnt++){
if(arr[iCnt]<end && arr[iCnt]>start){
printf("%d",arr[iCnt]);
}
}

}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
int iValue1=0;
int iValue2=0;
printf("enter the element in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter element in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}
printf("enter Start no:\n enter end no:");
scanf("%d %d",&iValue1,&iValue2);

Range1(ptr,iSize,iValue1,iValue2);
free(ptr);
return 0;
}