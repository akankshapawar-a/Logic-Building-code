/*
enter a character:Q
Q       R       S       T       U       V       W       X       Y      Z
enter a character:m
m       l       k       j       i       h       g       f       e       d       c       b     a
enter a character:8
*/

#include<stdio.h>

void Display(char ch){
int i=0;
if((ch>='a')&& (ch<='z')){
for(i=ch;i>='a';i--){
printf("%c\t",i);

}

}
else if((ch>='A')&& (ch<='Z')){
for(i=ch;i<='Z';i++){
printf("%c\t",i);
}
}
else{
printf(" ");
}

}

int main(){
char c='\0';
printf("enter a character:");
scanf("%c",&c);
Display(c);
return 0;

}