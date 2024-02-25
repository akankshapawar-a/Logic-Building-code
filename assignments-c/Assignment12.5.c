
#include<stdio.h>
#include<stdlib.h>
void Digit(int arr[],int iLength){
int iCnt=0;
int iDigit=0;
int iSum=0;
int sum=0;
for(iCnt=0;iCnt<iLength;iCnt++){
while(arr[iCnt]!=0){
iDigit=arr[iCnt]%10;
iSum=iSum+iDigit;
sum=iSum;
arr[iCnt]=arr[iCnt]/10;


}
printf("%d",sum);
}



}
int main(){
int iSize=0;
int iCnt=0;
int *ptr=NULL;

printf("enter the element in array:");
scanf("%d",&iSize);
ptr=(int *)malloc(iSize*sizeof(int));
printf("enter element in array:");
for(iCnt=0;iCnt<iSize;iCnt++){
scanf("%d",&ptr[iCnt]);
}
Digit(ptr,iSize);

return 0;
}