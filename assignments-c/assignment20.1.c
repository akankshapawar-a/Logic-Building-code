/*
check whether it is alphebet or not
enter a character:r
True
enter a character:%
False
*/

#include<stdio.h>
#include<stdbool.h>
bool check(char ch){
if((ch>='A') && (ch<='Z') || (ch>='a') && (ch<='z')){
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