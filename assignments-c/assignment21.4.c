/*
4. Accept Character from user and check whether it is special symbol or not (1, @, #, $, %, ^, &, *).
enter a character:%
True
enter a character:8
False
enter a character:w
False
enter a character:A
False
*/

#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
if((ch>='a') && (ch<='z') ){
   return false;
}
else if((ch>='A') && (ch<='Z') ){
   return false;
}
else if((ch>='0') && (ch<='9') ){
   return false;
}

else {
return true;
}
}

int main(){
char c='\0';
bool bRes=false;
printf("enter a character:");
scanf("%c",&c);
bRes =check(c);
if(bRes==true){
printf("True");
}
else{
printf("False");
}
return 0;

}