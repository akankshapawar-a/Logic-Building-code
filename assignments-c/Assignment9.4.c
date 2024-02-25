
// Accept N numbers from user and display all such elements which are divisble by 3 and 5
// input : 6
// elements : 85 66 3 15 93 88
// output : 15


#include<stdio.h>
#include<stdlib.h>
int EvenOddDiff(int arr[],int iLength){
int iCnt=0;

for(iCnt=0;iCnt<iLength;iCnt++){
   if((arr[iCnt]%3==0) && (arr[iCnt]%5==0)){
   printf("%d\t",arr[iCnt]);
}
}

}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;

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
EvenOddDiff(ptr,iSize);

free(ptr);
return 0;
}
