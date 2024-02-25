/*

1. Write a program which accept string from user and count number of capital characters.

enter a character:Akanksha
1
enter a character:AKANKSHA
8
*/
#include<stdio.h>

int Display(char *str){
int iCnt=0;
while(*str!='\0'){
if((*str>='A') && (*str<='Z')){
iCnt++;
}
str++;
}
return iCnt;

}

int main(){
char Arr[20];
int iRes=0;
printf("enter a character:");
scanf("%[^'\n']s",Arr);
iRes=Display(Arr);
printf("%d",iRes);
return 0;

}