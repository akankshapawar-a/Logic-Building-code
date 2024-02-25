//Search First oCccurance
#include<stdio.h>
#include<stdlib.h>

int searchfirstoccurance(int arr[],int iLength,int iNo){
int iCnt=0;

for(iCnt=0;iCnt<iLength;iCnt++){
   if(arr[iCnt]==iNo){
  break;
}
}
if(arr[iCnt]==iLength){
return -1;
}
else{
return iCnt;
}
}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;
int iValue=0;
int iRet=0;
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
printf("enter number which you want to search:");
scanf("%d",&iValue);
//printf("elements in array:");
//for(iCnt=0;iCnt<iSize;iCnt++){
//printf("%d",ptr[iCnt]);
//}
iRet=searchfirstoccurance(ptr,iSize,iValue);
if(iRet ==-1){
        printf("There is no such element\n");

}else{
        printf("%d occured at index %d\n",iValue,iRet);

}

free(ptr);
return 0;
}
