
// Accept N number from user and check whearther 11 number is contain or not
// input N : 6
// element : 85 66 3 15 11 88
// output : 11 is contain

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int arr[],int iLength){
int iCnt=0;

for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]==11){
   break;
}

}
if(arr[iCnt]==11){
return true;
}
else{
return false;
}

}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
bool bRes=false;
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
bRes=Check(ptr,iSize);
if(bRes==true){
printf("11 is contain");
}
else{
printf("11 is not contain");
}
free(ptr);
return 0;
}
