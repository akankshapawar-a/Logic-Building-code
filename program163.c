#include<stdio.h>
#include<string.h>
int strlenX(char *str)
{
int iCount=0;
while(*str!='\0'){
if((*str>='0') && (*str<='9')){
iCount++;
}
str++;

}
return iCount;
}
int main(){
char Arr[20];
int iRet=0;
printf("enter you name");
scanf("%[^'\n']s",Arr);
iRet = strlenX(Arr);
printf("enter your name:%d\n",iRet);
return 0;
}