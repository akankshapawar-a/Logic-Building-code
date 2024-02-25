// count Even number using a ptr
#include<stdio.h>
#include<stdlib.h>
int evenodd(int arr[],int iLength){
int iCnt=0;
int count=0;
for(iCnt=0;iCnt<iLength;iCnt++){
     if(arr[iCnt]%2==0){
count++;
//printf("\n%d",arr[iCnt]);
}

}
return count;
}
int main(){
int iSize=0;
int *ptr=NULL;
int iCnt=0;
int Res=0;
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
Res=evenodd(ptr,iSize);
printf("%d",Res);
free(ptr);
return 0;
}