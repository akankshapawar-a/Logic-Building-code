// Accept N number from user and return frequency of N from it check whether it is present or not

// input N : 6
// element : 85 66 3 15 11 88
// search=15
// output : True


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Check(int arr[],int iLength,int iNo){
int iCnt=0;

for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]==iNo){
break;
}

}
if(arr[iCnt]==iNo){
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
int search=0;
bool iRes=0;
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
printf("enter number for search:");
scanf("%d",&search);
//printf("elements in array:");
//for(iCnt=0;iCnt<iSize;iCnt++){
//printf("%d",ptr[iCnt]);
//}
iRes=Check(ptr,iSize,search);
if(iRes==true){
printf("True");
}
else{
printf("False");
}
free(ptr);
return 0;
}
