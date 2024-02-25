// Vowels :''

#include<stdio.h>
#include<stdlib.h>
int Countspace(char *str, char cValue){
int iCnt=0;
while(*str !='\0'){

if(*str==cValue){
iCnt++;


}
str++;
}


return iCnt;
}
int main(){
char Arr[20];
char ch='\0';
int iRes=0;
printf("enter string:");
scanf("%[^'\n']s",Arr);
fflush(stdin);
printf("enter Character:");
scanf("%c",Arr);

iRes=Countspace(Arr,ch);

 printf("Number of occurances are : %d\n",iRes);

return 0;
}
