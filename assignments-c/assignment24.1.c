/*
enter the string:sanket
enter the character:k
Charater found
enter the string:akanksga
enter the character:v
character not found
*/

#include<stdio.h>
#include<stdbool.h>
bool chechchar(char * str,char ch){
while(*str!='\0'){
if(*str==ch){
break;
}
str++;
}
if(*str==ch){
return true;
}
else{
return false;
}

}
int main(){
char Arr[20];
char cValue;
bool bRes=false;
printf("enter the string:");
scanf("%[^'\n']s",Arr);
printf("enter the character:");
scanf(" %c",&cValue);
bRes=chechchar(Arr,cValue);
if(bRes==true){
printf("Charater found");
}
else{
printf("Charater not found");
}



return 0;
}