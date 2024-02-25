//Array program by using forloop
#include<stdio.h>
#include<stdlib.h>
int main(){
int arr[5];
printf("Enter elements in array:\n");
int iCnt=0;
for(iCnt=0;iCnt<5;iCnt++){
scanf("%d",&arr[iCnt]);
}
printf("print elements in array:\n");
for(iCnt=0;iCnt<5;iCnt++){
printf("%d",arr[iCnt]);
}
return 0;
}