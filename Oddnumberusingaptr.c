//Odd number using a ptr
#include<stdio.h>
#include<stdlib.h>
void evenodd1(int arr[],int iLength){
int iCnt=0;
for(iCnt=0;iCnt<iLength;iCnt++){
     if(arr[iCnt]%2!=0){
printf("\n%d",arr[iCnt]);
}

}
}
int main(){
int iSize=0;
int *ptr=NULL;
int iCnt=0;
printf("Enter the elements :");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter elements in array:");
for(int iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);

}
printf("elements in arrays:");
for(int iCnt=0;iCnt<iSize;iCnt++){
printf("%d",ptr[iCnt]);

}
evenodd1(ptr,iSize);
free(ptr);
return 0;
}