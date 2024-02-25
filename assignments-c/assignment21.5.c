
/*
5. Accept character from user and display its ASCII value in decimal, octal and hexadecimal format.
enter a character:A
decimal : 65
Ocatal :101
capital hexa :41
 small hexa: 41
*/


#include<stdio.h>

void Display(char ch){
printf("decimal : %d\n", ch);
printf("Ocatal :%o\n", ch);
printf("capital hexa :%X\n ", ch);
printf("small hexa: %x", ch);





}

int main(){
char c='\0';
printf("enter a character:");
scanf("%c",&c);
Display(c);
return 0;

}