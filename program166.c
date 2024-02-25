// Vowels :''

#include<stdio.h>
int Countspace(char *str){
int iCnt=0;
while(*str !='\0'){

if(*str=='z'){
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
iRes=Countspace(Arr);

printf("count of spaces :%d\n",iRes);

return 0;
}
