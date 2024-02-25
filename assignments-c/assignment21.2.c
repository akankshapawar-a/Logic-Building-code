/*
2. Accept character from user. If character is small display its corresponding capital character, and if it small then display its corresponding capital. In other cases display as it is.
enter a character:Q
q
enter a character:m
M
enter a character:4
4
enter a character:%
%



*/


#include<stdio.h>

void Display(char ch){
if((ch>='a')&& (ch<='z')){
ch=(ch-32);
printf("%c",ch);
}
else if((ch>='A')&& (ch<='Z')){
ch=(ch+32);
printf("%c",ch);
}
else{
printf("%c",ch);
}

}

int main(){
char c='\0';
printf("enter a character:");
scanf("%c",&c);
Display(c);
return 0;

}