/*
space bet stringS
enter a character:akabk jyt
1*/
#include<stdio.h>

int Display(char *str){
int count=0;
while(*str!='\0'){

if(*str==' '){
count++;
}
str++;
}
return count;
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