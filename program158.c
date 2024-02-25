#include<stdio.h>
int main(){
char Arr[20];
printf("enter you name");
scanf("%[^'\n']s",Arr);

printf("enter your name:%s\n",Arr);
return 0;
}                       
