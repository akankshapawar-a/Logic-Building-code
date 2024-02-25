// Vowels : a   e   i   o   u   A   E   I   O   U

#include<stdio.h>
int CountVowel(char *str){
int iCnt=0;
while(*str !='\0'){

if((*str == 'A') || (*str == 'E')|| (*str == 'I')|| (*str == 'O')|| (*str == 'U')|| (*str == 'a')|| (*str == 'e')|| (*str == 'i')|| (*str == 'o')|| (*str == 'u'))
{

iCnt++;
}
str++;
}


return iCnt;
}
int main(){
char Arr[20];
int iRes=0;
printf("enter string:");
scanf("%[^'\n']s",Arr);
iRes=CountVowel(Arr);

printf("enter your name:%d\n",iRes);

return 0;
}
