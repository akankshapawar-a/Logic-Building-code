/*
check whether it is capital alphebet or not
enter a character:A
True

enter a character:a
False
*/

#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
if((ch>='A') && (ch<='Z') ){
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