#include<stdio.h>
#include<string.h>
int main(){
char Arr[20];
int iRet=0;
printf("enter you name");
scanf("%[^'\n']s",Arr);
iRet=strlen(Arr);
printf("enter your name:%s\n",Arr);
return 0;
}