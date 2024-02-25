#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int arr[],int iLength,int iNo){
int iCnt=0;
bool flag=false;
for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]==iNo){
flag =true;
   break;
}

}
return flag;

}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
bool bRes=false;
int search=0;
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
printf("enter number you want to search:");
scanf("%d",&search);

//printf("elements in array:");
//for(iCnt=0;iCnt<iSize;iCnt++){
//printf("%d",ptr[iCnt]);
//}
bRes=Check(ptr,iSize,search);
if(bRes==true){
printf("The element is present in array");
}
else{
printf("The element is not present in array");

}
free(ptr);
return 0;
}
