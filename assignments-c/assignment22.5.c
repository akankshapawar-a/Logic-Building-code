/*
Write a program which accept string from user and display it inn reverse order.
*/

#include<stdio.h>

void Display(char *str){
char *start=NULL;
char *end=NULL;
char temp='\0';
 start=str;
end=str;
while(*end!='\0'){
end++;
}
end--;


while(start<end){
temp=*start;
*start=*end;
*end=temp;
start++;
end--;
}}
int main(){
char Arr[20];
printf("enter a character:");
scanf("%[^'\n']s",Arr);
Display(Arr);
printf("%s",Arr);
return 0;

}