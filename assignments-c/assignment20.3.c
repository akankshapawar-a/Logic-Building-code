/*
check whether it is digit or not

enter a character:0
True
enter a character:A
False
enter a character:a
False
enter a character:8
True
*/
#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
if((ch>='0') && (ch<='9') ){
   return true;
}
else {
return false;
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