/*
3. Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters
enter a character:AKANkashA
-1
enter a character:Aakanksha
7
*/
#include<stdio.h>

int Display(char *str){
int iCnt1=0;
int iCnt2=0;
//int diff=0;
while(*str!='\0'){
if((*str>='a') && (*str<='z')){
iCnt1++;
}
if((*str>='A') && (*str<='Z')){
iCnt2++;
}
str++;
}
return iCnt1-iCnt2;

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