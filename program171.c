#include<stdio.h>
int FirstOccurance(char *str, char ch){
int iCnt=0;
int pos=0;
while(*str!='\0'){
if(*str==ch){
pos=iCnt;
break;
}
iCnt++;
str++;

}
return pos;
}
int main(){
char Arr[20];
int iRes=0;
char c='\0';
printf("enter String:\n");
scanf("%[^'\n']s",&Arr);

printf("enter String:\n");
scanf(" %c",&c);
iRes= FirstOccurance(Arr,c);
printf("The first occurance of string:%d\n",iRes);
return 0;
}