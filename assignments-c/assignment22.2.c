/*

2. Write a program which accept string from user and count number of small characters.
enter a character:akanksha
8
enter a character:Akanksha
7

*/
#include<stdio.h>

int Display(char *str){
int iCnt=0;
while(*str!='\0'){
if((*str>='a') && (*str<='z')){
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