// Wherether given character is capital or not

//find ascii is captial or not

#include<stdio.h>
#include<stdbool.h>

bool CheckAscii(char ch){
if(ch>='A' && ch<='Z'){
return true;

}
else{
return false;
}


}
int main(){

char iChar='\0';
bool bRet=false;
printf("enter any character:");
scanf("%c",&iChar);
bRet=CheckAscii(iChar);
if(bRet==true){
  printf("%c is a capital letter\n",iChar);
}
else{
  printf("%c is not a capital letter\n",iChar);

}
return 0;

}