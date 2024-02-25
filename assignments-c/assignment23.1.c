/*
convert in lower case string

enter a character:Akanksha
akanksha
enter a character:AKANKSHA HELLO DEAR
akanksha hello dear
*/
#include<stdio.h>

void Display(char *str){
while(*str!='\0'){

if((*str>='A') && (*str<='Z')){
*str=(*str+32);
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