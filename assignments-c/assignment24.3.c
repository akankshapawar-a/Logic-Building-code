/*
first occurance
enter the string:Akanksha
enter the character:a
2

*/


#include<stdio.h>
int firstoccurance(char * str,char ch){
int count=0;
int pos=0;
while(*str!='\0'){
if(*str==ch){
pos=count;
break;

}
str++;
count++;
}
return pos;
}
int main(){
char Arr[20];
char cValue;
int bRes=0;
printf("enter the string:");
scanf("%[^'\n']s",Arr);
printf("enter the character:");
scanf(" %c",&cValue);
bRes=firstoccurance(Arr,cValue);
printf("%d",bRes);


return 0;
}