#include<stdio.h>
#include<stdlib.h>
void Demo(int arr[], int tlength){

}
int main(){
int iSize=0;
int *ptr=NULL;
int iCnt=0;
printf("enetr the elements:");
scanf("%d\n",&iSize);
ptr=(int *) malloc(iSize*sizeof(int));
printf("enter the elememts:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d\n",&ptr[iCnt]);

}
printf("Elements of array are:\n");
for(iCnt=0;iCnt<iSize;iCnt++){
printf("%d",ptr[iCnt]);
}
Demo(ptr,iSize);
free(ptr);
return 0;
}