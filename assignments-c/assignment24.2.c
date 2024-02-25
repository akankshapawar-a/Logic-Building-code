/*
frequency of given character
enter the string:Akanksha
enter the character:a
2
enter the string:akanksha
enter the character:a
3
*/

#include<stdio.h>
int chechchar(char * str,char ch){
int count=0;
while(*str!='\0'){
if(*str==ch){
count++;
}
str++;
}
return count;
}
int main(){
char Arr[20];
char cValue;
int bRes=0;
printf("enter the string:");
scanf("%[^'\n']s",Arr);
printf("enter the character:");
scanf(" %c",&cValue);
bRes=chechchar(Arr,cValue);
printf("%d",bRes);


return 0;
}