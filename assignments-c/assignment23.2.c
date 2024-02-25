/*
convert in upper case string

enter a character:akanksha
AKANKSHA
enter a character:AKAnksha
AKANKSHA*/
#include<stdio.h>

void Display(char *str){
while(*str!='\0'){

if((*str>='a') && (*str<='z')){
*str=(*str-32);
}
str++;
}


}

int main(){
char Arr[20];
printf("enter a character:");
scanf("%[^'\n']s",Arr);
Display(Arr);
printf("%s",Arr);
return 0;

}