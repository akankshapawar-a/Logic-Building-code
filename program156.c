// Wherether given character is capital or not

//find ascii is captial or not   0 to 9

#include<stdio.h>
#include<stdbool.h>

bool CheckAscii(char ch){
if(ch>='0' && ch<='9'){
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
  printf("%c is a digit\n",iChar);
}
else{
  printf("%c is not  a digit\n",iChar);

}
return 0;

}